# -*- encoding: UTF-8 -*- 
import os
import sys
import time
import argparse
import thread

from naoqi import ALProxy
from naoqi import ALBehavior

from os.path import dirname
from os.path import abspath

dev = os.environ["INDRIYA_ROOT"]
dir1 = os.path.join(dev,"scripts","msgs")
dir2 = os.path.join(dev,"scripts","experimot_robot_interface")

#currdir = dirname(__file__)
#parent = abspath(os.path.join(currdir,os.pardir))

sys.path.append(dir1)
sys.path.append(dir2)

# Message - Node parameters
#import node_pb2
# Zero mq messaging library
import zmq
# Utils
import parameter_utils

def main(robotIP, port, behaviorName):
  # Create proxy to ALBehaviorManager
  print "Creating behavior manager", robotIP, port
  managerProxy = ALProxy("ALBehaviorManager", robotIP, port)
  getBehaviors(managerProxy)
  launchAndStopBehavior(managerProxy, behaviorName)
  defaultBehaviors(managerProxy, behaviorName)

#############################################################################################################
# Behavior server - A Behavior request/response server
def behavior_server(ip,port,robot_ip,robot_port):
    context = zmq.Context()
    socket = context.socket(zmq.REP)
    socket.bind(("%s:%d" % (ip,port)))
    print "Server bound: %s,%d" % (ip,port)
    while True:
        #  Wait for next request from client
        behavior = socket.recv()
        print("Received request: %s" % behavior)

        try:
            manager = create_proxy(robot_ip,robot_port)
            execute_behavior(manager,behavior)
            socket.send("Execution successful")
        except:
            print "Exception occured while execution ", sys.exc_info()
            socket.send("Execution Failed")

        #  Do some 'work'
        time.sleep(0.5)

    print "quitting ... "

def create_proxy(robotIP, port):
  # Create proxy to ALBehaviorManager
  print "Creating behavior manager", robotIP, port
  managerProxy = ALProxy("ALBehaviorManager", robotIP, port)
  return managerProxy

def execute_behavior(managerProxy,behaviorName):
  getBehaviors(managerProxy)
  launchAndStopBehavior(managerProxy, behaviorName)
  defaultBehaviors(managerProxy, behaviorName)

def getBehaviors(managerProxy):
  ''' Know which behaviors are on the robot '''

  names = managerProxy.getInstalledBehaviors()
  print "Behaviors on the robot:"
  print names

  names = managerProxy.getRunningBehaviors()
  print "Running behaviors:"
  print names

def launchAndStopBehavior(managerProxy, behaviorName):
  ''' Launch and stop a behavior, if possible. '''

  # Check that the behavior exists.
  if (managerProxy.isBehaviorInstalled(behaviorName)):

    # Check that it is not already running.
    if (not managerProxy.isBehaviorRunning(behaviorName)):
      # Launch behavior. This is a blocking call, use post if you do not
      # want to wait for the behavior to finish.
      managerProxy.post.runBehavior(behaviorName)
      time.sleep(1)
    else:
      print "Behavior is already running."

  else:
    print "Behavior not found."
    return

  names = managerProxy.getRunningBehaviors()
  print "Running behaviors:"
  print names

  # Stop the behavior.
  while (managerProxy.isBehaviorRunning(behaviorName)):
    time.sleep(1.0)
  
  if (managerProxy.isBehaviorRunning(behaviorName)):
    managerProxy.stopBehavior(behaviorName)
    time.sleep(1.0)
  else:
    print "Behavior is already stopped."

  names = managerProxy.getRunningBehaviors()
  print "Running behaviors:"
  print names

def defaultBehaviors(managerProxy, behaviorName):
  ''' Set a behavior as default and remove it from default behavior. '''

  # Get default behaviors.
  names = managerProxy.getDefaultBehaviors()
  print "Default behaviors:"
  print names

  # Add behavior to default.
  managerProxy.addDefaultBehavior(behaviorName)

  names = managerProxy.getDefaultBehaviors()
  print "Default behaviors:"
  print names

  # Remove behavior from default.
  managerProxy.removeDefaultBehavior(behaviorName)

  names = managerProxy.getDefaultBehaviors()
  print "Default behaviors:"
  print names


if __name__ == "__main__":

  #if (len(sys.argv) < 3):
  #  print "Usage python albehaviormanager_example.py robotIP behaviorName"
  #  sys.exit(1)
  try:
      ROBOTIP = "127.0.0.1"
      PORT = 55241
      if (len(sys.argv) >= 3):
          print sys.argv
          parser = argparse.ArgumentParser(description='Nao Robot Behavior')
          parser.add_argument('-p','--param', help='Parameter server address', required=True)
          parser.add_argument('-n','--name', help='Name of the node', required=True)
          args = vars(parser.parse_args())
          name = args["name"]
          paramServer = args["param"]

          # Utils
          import parameter_utils
          node = parameter_utils.getNodeParameters(name,paramServer,1000)

          if node != None:
              ROBOTIP = parameter_utils.getParam(node,"ROBOTIP", "127.0.0.1")
              PORT =  int(parameter_utils.getParam(node,"ROBOTPORT", "9559"))
              BEHAVIOR_PORT = int(parameter_utils.getParam(node,"RequestServerPort", "5590"))
              BEHAVIOR_IP = parameter_utils.getParam(node,"RequestServerIP", "*")
              parameter_utils.register_motions(node,paramServer,["crouch","stand","hand_wave","greet","wish","introduction"])
              thread.start_new_thread(behavior_server,(BEHAVIOR_IP,BEHAVIOR_PORT,ROBOTIP,PORT));
      else:
          print "Start locally"

      time.sleep(1)

      # do nothing 
      while 1:
        pass
      #managerProxy = create_proxy(ROBOTIP,PORT)
      #execute_behavior(managerProxy, "crouch")
  except:
      print "Exception occured : ", sys.exc_info()

    
  raw_input("Press enter to continue ... ")