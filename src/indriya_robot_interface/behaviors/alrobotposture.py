__author__ = 'GVlab'

# -*- encoding: UTF-8 -*-

import sys

from naoqi import ALProxy


def main(robotIP,port):

    try:
        postureProxy = ALProxy("ALRobotPosture", robotIP, port)
    except Exception, e:
        print "Could not create proxy to ALRobotPosture"
        print "Error was: ", e

    postureProxy.goToPosture("StandInit", 1.0)
    postureProxy.goToPosture("SitRelax", 1.0)
    postureProxy.goToPosture("StandZero", 1.0)
    postureProxy.goToPosture("LyingBelly", 1.0)
    postureProxy.goToPosture("LyingBack", 1.0)
    postureProxy.goToPosture("Stand", 1.0)
    postureProxy.goToPosture("Crouch", 1.0)
    postureProxy.goToPosture("Sit", 1.0)

    print postureProxy.getPostureFamily()


if __name__ == "__main__":
    robotIp = "127.0.0.1"
    #port = 9559
    port = 51349
    if len(sys.argv) <= 1:
        print "Usage python alrobotposture.py robotIP (optional default: 127.0.0.1)"
    else:
        robotIp = sys.argv[1]

    main(robotIp,port)