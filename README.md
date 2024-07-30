# HBridge-DC-Motor-Control-using-Arduino

# Task 6: Run Hbridge with DC motor using Arduino (Tinkercad)

## Description

This project uses an H-Bridge circuit to control the direction of a DC motor. An H-Bridge allows a motor to be driven forwards and backwards. This setup is commonly used in robotics and other projects requiring motor control. The code provided will run the motor forward for 2 seconds and then reverse it for another 2 seconds, continuously.

## Demo

![Dusing H bridge ](https://github.com/user-attachments/assets/fb6808e4-61a3-49b1-a150-ec86eb7b3e7c)

## Components Used

* Arduino Uno
* H-Bridge (L298N or similar)
* DC Motor
* Breadboard
* Jumper wires

## Setup and Wiring

1. Arduino to H-Bridge Connections:
* `pin 12` -> H-Bridge Enable Pin
* `pin 10` -> H-Bridge Input 1
* `pin 8` -> H-Bridge Input 2

2. H-Bridge to DC Motor Connections:
* H-Bridge Output 1 -> Motor Terminal 1
* H-Bridge Output 2 -> Motor Terminal 2

3. Power Supply:
* Connect the motor power supply to the H-Bridge power input.
* Connect the Arduino `5V` and `GND` to the H-Bridge `VCC` and `GND`.

## Acknowledgements
https://www.tinkercad.com/things/gp98UnWa0fJ-arduino-controlling-a-dc-motor-using-h-bridge
