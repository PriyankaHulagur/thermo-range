ThermoRange Arduino Project

A simple project that uses an HC-SR04 ultrasonic sensor and an LM35 temperature sensor with an Arduino to measure distance and temperature.
The system uses temperature to adjust the speed of sound and gives a more accurate distance value through the Serial Monitor.

Project Overview

The goal of this project is to measure the distance of an object and the surrounding temperature.The HC-SR04 measures distance by sending an ultrasonic signal and measuring the time taken for the echo to return.The LM35 measures temperature. The Arduino uses this temperature value to calculate the speed of sound and then calculates the distance.

Components Required

Arduino Uno
HC-SR04 Ultrasonic Sensor
LM35 Temperature Sensor
Breadboard
Jumper Wires

Working Principle

The LM35 measures the temperature, while the HC-SR04 measures the distance of an object. The Arduino uses the temperature value to adjust the speed of sound, which helps improve the accuracy of distance measurement.

The Arduino:

  1.Reads the analog temperature value from the LM35.

  2.Converts the raw analog value into temperature in Celsius.

  3.Sends an ultrasonic pulse from the HC-SR04.

  4.Measures the time taken for the echo to return.

  5.Calculates the speed of sound based on the measured temperature. 

  6.Uses the echo time and speed of sound to calculate the distance.

  7.Sends the temperature and distance values to the Serial Monitor.

This process repeats every second giving us an update. 

Software

We use the Arduino IDE to write and upload the code. The language used is a mix of C++ and embedded C. The code runs directly on the Arduino board and handles the LM35 and HC-SR04 sensor readings, temperature compensation, and distance calculation.

How to Run

To start the project follow these steps:

   1.Place the LM35 sensor on the breadboard.

   2.Connect the LM35 VCC to 5V on the Arduino.

   3.Connect the LM35 GND to Arduino GND.

   4.Connect the LM35 output to analog pin A0.

   5.Place the HC-SR04 ultrasonic sensor on the breadboard.

   6.Connect its VCC and GND to 5V and GND on the Arduino.

   7 Connect TRIG to digital pin 9 and ECHO to digital pin 10.

   8.Connect the Arduino Uno to the computer using a USB cable.

   9.Open thermorange.ino in the Arduino IDE. 

  10.Select Arduino Uno and the correct COM port.

  11.Click Upload to send the code to the Arduino.

  12.Open the Serial Monitor and set the baud rate to 9600.

  13.Place an object in front of the HC-SR04 and observe the temperature and distance values.

After that, the temperature and distance will appear on the screen every second. The distance calculation is adjusted according to the measured temperature, giving more accurate results.
