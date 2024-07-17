Arduino Ultrasonic Alarm System

This is a basic alarm system built with Arduino Uno, an ultrasonic sensor, buzzer, and LEDs. It detects motion within a pre-defined range and triggers an alarm with flashing lights and a loud buzzing sound.

Hardware Requirements:

Arduino Uno
Ultrasonic Sensor HC-SR04
Buzzer
Orange LED
Green LED
Jumper Wires
Breadboard (optional)
Software Requirements:

Arduino IDE (https://www.arduino.cc/)

Assembly:

The included schematic diagram is a sample for connecting the components to the Arduino board. Make sure your connections
are the same both on code and on hardware.
Ensure proper connections and orientations of all components.


Using the Project

Upload the Code:

Open the arduino_alarm_system.ino file (or your code filename) in the Arduino IDE.
Select your Arduino board from the Tools menu.
Upload the code to your Arduino board.


Testing the Alarm:

Power on the system.
The system should be in an idle state with no LEDs lit.
Place an object within the sensor's detection range (typically around 2-4 meters).
The alarm should activate with flashing LEDs and a buzzing sound.
Customization (Optional)

You can adjust the detection range by modifying the distance calculation in the code.
Change the LED colors or buzzer frequency in the code for personalization.
Consider adding a delay before the alarm triggers to allow for authorized movement near the sensor.
Troubleshooting

Ensure all connections are secure and follow the schematic diagram.
Verify the sensor is properly oriented (transmitter and receiver sides).
Check for errors in the uploaded code.
If using libraries, make sure they are installed correctly in the Arduino IDE.
Further Development

Integrate a passive infrared (PIR) sensor for more accurate motion detection.
Implement a keypad or switch to disable the alarm.
Connect the system to a cloud platform for remote monitoring and notifications.
This README file provides a basic guide for using the Arduino Ultrasonic Alarm System. Feel free to explore the code and experiment with customizations to suit your specific needs. 
Schematics Credit: https://www.instructables.com/Arduino-Distance-Detector-with-a-Buzzer-and-LEDs/
