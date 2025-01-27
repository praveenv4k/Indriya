## Indriya - An experimental Platform for Human Robot Interaction based on human behaviors

### About

- The aim of this master thesis project is to develop an experimental platform for human robot interaction 
understanding the human behaviors. Human motion capture is done using kinect for windows v2 sensor and either Kinect microphone or an external microphone could be used as speech input.

### Project homepage
 - http://praveenv4k.github.io/indriya

### Requirements

- Platform: Windows 8.1 64-bit (x64).
- Development Tool: Visual Studio 2013, Update 4. Plugin: NuGet Package Manager
- Library Dependencies:
- Kinect for Windows SDK 2.0 (http://www.microsoft.com/en-us/download/details.aspx?id=44561)
- Point Cloud Library V1.7.2 - All in one installer for VS2013 can be found at (http://unanancyowen.com/?p=1255&lang=en)
- OpenCV 2.4.10 (http://opencv.org/downloads.html)
- Boost C++ Libraries V1.57 (http://www.boost.org)
- ALVAR Marker detection toolkit (http://virtual.vtt.fi/virtual/proj2/multimedia/alvar/)
- OpenRAVE 0.9 (https://github.com/rdiankov/openrave)
- Zero MQ (http://zeromq.org)
- Google Protocol Buffers (https://developers.google.com/protocol-buffers/)
- Web Libraries: 
    - JQuery
    - JQuery-UI
	- JQuery-JSONView
	- Backbone
	- Backbone.Modal
	- Backbone.Poller
	- Google Blockly
	- Marionette
	- Marionette-Threejs
	- RequireJS
	- Threejs
	- Underscore
	- Google blockly

### Build steps

- Open indriya.sln
- Choose the "Release|Mixed Platforms" configuration
- Click Menu->Build->Build Solution

### Configuration Steps

* TODO


### Running the application

* Configure the IP address of the robot in the IndriyaConfig.xml (ROBOTIP and ROBOTPORT)
* Run the application Indriya.Application.exe
* Open the browser and go to http://IP_ADDRESS_OF_MACHINE:8888
* The behavior can be designed from the "Design" tab of the web application and press RUN to run the behavior
* The interaction between the robot and human can be visualized in a virtual environment in the "Visualize" tab

## License

Indriya is released under the [MIT License](http://www.opensource.org/licenses/MIT).
