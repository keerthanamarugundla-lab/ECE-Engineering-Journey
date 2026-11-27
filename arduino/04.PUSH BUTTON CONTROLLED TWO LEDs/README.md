# PROJECT 4: PUSH BUTTON CONTROLLED TWO LEDs USING ARDUINO UNO

## 1. DESCRIPTION:
This project uses two push buttons to control two LEDs using Arduino UNO. Each push button is used to control an LED. When a button is pressed, the corresponding LED turns ON. When the button is released, the LED turns OFF.

## 2. AIM:
To interface two push buttons and two LEDs with Arduino UNO and understand how multiple digital inputs control multiple digital outputs.

## 3. COMPONENTS REQUIRED:
- Arduino UNO
- 2 Push buttons
- 1 Red LED
- 1 LED (second LED)
- 2 Resistors for LEDs
- Breadboard
- Jumper wires
- USB cable

## 4. CONNECTIONS:
- Push Button 1 → Arduino Digital Input Pin
- Push Button 2 → Arduino Digital Input Pin
- LED 1 → Arduino Digital Output Pin through resistor
- LED 2 → Arduino Digital Output Pin through resistor
- Push buttons → GND using INPUT_PULLUP
- LED cathodes → GND

## 5. WORKING PRINCIPLE:
Arduino reads the state of both push buttons using digital input pins.

When Push Button 1 is pressed, Arduino detects LOW and turns ON LED 1.

When Push Button 2 is pressed, Arduino detects LOW and turns ON LED 2.

When the buttons are released, the corresponding LEDs turn OFF.

Both buttons can operate independently.

## 6. SOFTWARE USED:
- Arduino IDE
- Tinkercad Circuits

## 7. SKILLS LEARNED:
- Interfacing multiple push buttons
- Controlling multiple LEDs
- Digital input and output
- Using digitalRead()
- Using digitalWrite()
- Understanding INPUT_PULLUP
- Using if-else conditions
- Basic circuit design and simulation

## 8. OUTPUT:
Pressing the first push button turns ON the first LED.

Pressing the second push button turns ON the second LED.

Releasing the buttons turns their respective LEDs OFF.

## 9. APPLICATIONS:
- Multiple switch control systems
- Control panels
- Electronic devices
- User input systems
- Home automation
- Basic automation projects
