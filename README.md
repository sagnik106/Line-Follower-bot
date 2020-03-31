# Line-Follower-bot
A simple single black line follower bot. Stops when it encounters a black horizontal finish line. Speed reduced for reducing momentum when it comes to a sharp turn

####  _(Recommended)_ Specifications of the project:
* Arduino UNO
* 300 rpm geared motors
* L293D H bridge Motor Driver
* 2 IR sensors

#### __Pin configuration of Arduino UNO:__
###### Digital Pins:
5 - right motor's pin on the motor driver 1</br>
7 - IR module out</br>
8 - Alternate Vcc pin</br>
9 - IR module out</br>
10 - left motor's pin on motor driver 1</br>
11 - left motor's pin on motor driver 2</br>
12 - right motor's pin on motor driver 1</br>

#### Steps:
1. Connect the motors to the motor driver and jumpers from arduino to the IR module and the motor driver _(as given above)_
1. Connect the battery to the motor driver
1. Upload the [code](https://github.com/sagnik106/Line-Follower-bot/blob/master/linefoll.ino) on the arduino board
