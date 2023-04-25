# Traffic Light Controller

This project is a simple implementation of a traffic light controller using an Arduino board. The code turns on and off the red, yellow, and green LEDs to simulate a traffic light sequence. 

## Prerequisites

* Arduino board
* Red, yellow, and green LEDs
* Pushbutton
* Buzzer

## Installation

1. Connect the LEDs to digital pins 8, 9, and 10 on the Arduino board.
2. Connect the pushbutton to digital pin 12 on the Arduino board.
3. Connect the buzzer to digital pin 13 on the Arduino board.
4. Upload the `traffic_light_controller.ino` sketch to the Arduino board.

## Usage

When the code is uploaded and the board is connected to power, the traffic light controller will go through a startup sequence where the red LED is turned on for one second before turning off. To start the traffic light sequence, press the pushbutton. 

The traffic light sequence will run in a loop until the pushbutton is pressed again. The sequence runs as follows:

1. Red LED turns on for 17 seconds.
2. Buzzer turns on for 3 seconds.
3. Red LED turns off.
4. Green LED turns on for 17 seconds.
5. Buzzer turns on for 3 seconds.
6. Green LED turns off.
7. Yellow LED turns on for 3 seconds.
8. Yellow LED turns off.
9. Buzzer turns off.

## Credits

This code was written by Shane Swanton for the EECE.4520 - Microprocessors 2 course at UMass Lowell.
