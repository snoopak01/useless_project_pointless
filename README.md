<img width="1280" height="640" alt="git (1)" src="https://github.com/user-attachments/assets/8920b256-2ba8-4988-b824-5351134eb4bd" />



# Pinocchio 🎯


## Basic Details
### Team Name: Pointless


### Team Members
- Member 1: Snoopa K - NSS COLLEGE OF ENGINEERING,PALAKKAD
- Member 2: SAI KRISHNA -  NSS COLLEGE OF ENGINEERING,PALAKKAD
- 
### Project Description
A sound-responsive robotic puppet engineered using an Arduino UNO, KY-038 acoustic sensor, PCA9685 PWM servo controller, and four SG90 actuators. The system performs autonomous, pre-programmed locomotion sequences in response to detected acoustic stimuli, translating variations in sound intensity into coordinated mechanical movements of the puppet's limbs.

### The Problem (that doesn't exist)
In a world where music is already perfectly enjoyable, people still face the devastating problem of having nobody physically dance to every beat of their favorite song. This project solves this completely unnecessary crisis by creating an autonomous puppet that detects sound and performs synchronized robotic dance movements—because apparently, music simply isn't enough without a tiny robot having a breakdown on stage.

### The Solution (that nobody asked for)
We deployed an autonomous acoustic-to-motion translation system a fancy way of saying we taught a tiny puppet to hear music and immediately lose its composure. Using a sound sensor, Arduino, and four servo motors, it detects sufficiently loud music and unleashes a pre-programmed dance routine, ensuring that no beat goes completely un-danced-to.

## Technical Details
### Technologies/Components Used
For Software:
Languages used: C/C++ (Arduino)
Frameworks used: Arduino Framework
Libraries used: Wire.h, Adafruit_PWMServoDriver.h
Tools used: Arduino IDE, Arduino Serial Monitor, Arduino Serial Plotter, Git & GitHub

For Hardware:
Main components:
Arduino UNO
KY-038 Sound Sensor Module
PCA9685 16-Channel PWM Servo Driver
4 × SG90 Servo Motors
2 × 3.3V Li-ion Batteries
5V Boost Converter
Breadboard
Jumper Wires
Specifications:
Arduino UNO — ATmega328P microcontroller, 5V logic
KY-038 — Analog sound detection through AO pin
PCA9685 — 16-channel, 12-bit PWM servo controller, I²C interface
SG90 — 9g micro servo, approximately 4.8–6V operating range
Li-ion batteries — 3.3V cells connected in parallel
Boost Converter — Steps battery voltage up to regulated 5V for the servos
Tools required:
USB cable
Breadboard
Jumper wires
Soldering iron (optional, if using soldered/permanent connections)
Wire cutter/stripper
Hot glue gun
Scissors/craft knife
Cardboard/foam board for puppet constructio

### Implementation
For Software:
# Installation
1.Install Arduino IDE.
2.Connect the Arduino UNO to the computer using a USB cable.
3.Open Arduino IDE.
4.Install the required library:
5.Adafruit PWM Servo Driver Library
6.Select:
  Tools → Board → Arduino UNO
  Tools → Port → Select Arduino COM Port
7.Open the project .ino file.

# Run

1.Connect the KY-038 sound sensor and PCA9685 according to the circuit design.
2.Connect the four SG90 servos to PCA9685 channels 0–3.
3.Power the servos using the 5V boost converter.
4.Connect the Arduino UNO to the laptop via USB.
5.Click Upload in Arduino IDE.
6.After successful uploading, power the circuit.
7.The Arduino automatically executes the program.
8.When the KY-038 detects sound above the defined threshold, the puppet performs its pre-programmed dance sequence.
9.After completing the sequence, it checks for the next sound trigger.

### Project Documentation
For Software:

# Screenshots 
![Screenshot1](Add screenshot 1 here with proper name)
*Add caption explaining what this shows*

![Screenshot2](Add screenshot 2 here with proper name)
*Add caption explaining what this shows*

![Screenshot3](Add screenshot 3 here with proper name)
*Add caption explaining what this shows*

# Diagrams
![Workflow](Add your workflow/architecture diagram here)
*Add caption explaining your workflow*

For Hardware:

# Schematic & Circuit
![Circuit](Add your circuit diagram here)
*Add caption explaining connections*

![Schematic](Add your schematic diagram here)
*Add caption explaining the schematic*

# Build Photos
![Components](Add photo of your components here)
*List out all components shown*

![Build](Add photos of build process here)
*Explain the build steps*

![Final](Add photo of final product here)
*Explain the final build*

### Project Demo
# Video
[Add your demo video link here]
*Explain what the video demonstrates*

# Additional Demos
[Add any extra demo materials/links]

## Team Contributions
- [Name 1]: [Specific contributions]
- [Name 2]: [Specific contributions]
- [Name 3]: [Specific contributions]

---
Made with ❤️ at TinkerHub Useless Projects 

![Static Badge](https://img.shields.io/badge/TinkerHub-24?color=%23000000&link=https%3A%2F%2Fwww.tinkerhub.org%2F)
![Static Badge](https://img.shields.io/badge/UselessProjects--26-26?link=https%3A%2F%2Ftinkerhub.org%2Fevents%2F1M8ORET9A1%2Fuseless-projects-3.0)



