# PROJECT 2: TRAFFIC LIGHT CONTROL SYSTEM USING ARDUINO UNO

## 1. DESCRIPTION:
The Traffic Light Control System is an Arduino-based project that simulates the operation of a traffic signal using three LEDs: Red, Yellow, and Green. The Arduino controls the LEDs in a sequence with timed delays to represent traffic movement.

## 2. AIM:
To design and simulate a traffic light control system using Arduino UNO and understand how digital output pins control multiple LEDs in a timed sequence.

## 3. COMPONENTS REQUIRED:
- Arduino UNO
- Red LED
- Yellow LED
- Green LED
- 3 × 220Ω resistors
- Breadboard
- Jumper wires
- USB cable

## 4. CONNECTIONS:
- Red LED Anode (long leg) → Arduino Digital Pin 13 through a 220Ω resistor
- Red LED Cathode (short leg) → GND
- Yellow LED Anode (long leg) → Arduino Digital Pin 12 through a 220Ω resistor
- Yellow LED Cathode (short leg) → GND
- Green LED Anode (long leg) → Arduino Digital Pin 11 through a 220Ω resistor
- Green LED Cathode (short leg) → GND

## 5. WORKING PRINCIPLE:
The Arduino turns the Green LED ON to indicate that traffic can move. After 5 seconds, the Green LED turns OFF and the Yellow LED turns ON for 2 seconds to indicate caution.

Then the Yellow LED turns OFF and the Red LED turns ON for 5 seconds to indicate stop.

After the Red signal delay, the sequence repeats continuously.

## 6. SOFTWARE USED:
- Arduino IDE
- Tinkercad Circuits (for simulation)

## 7. SKILLS LEARNED:
- Controlling multiple digital output pins
- Using pinMode() and digitalWrite() functions
- Understanding HIGH and LOW logic states
- Using delay() to create timing sequences
- Circuit wiring and resistor use for LEDs
- Basic embedded-system logic and simulation

## 8. OUTPUT:
The LEDs operate in sequence:

GREEN ON → YELLOW ON → RED ON → REPEAT

Green LED glows for 5 seconds, Yellow LED glows for 2 seconds, and Red LED glows for 5 seconds. This sequence repeats continuously.

## 9. APPLICATIONS:
- Traffic signal demonstrations
- Educational traffic-light models
- Learning sequential control systems
- Basic embedded-system projects
- Demonstration of timed automation
