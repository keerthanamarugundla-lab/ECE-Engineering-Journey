# PROJECT 3: PUSH BUTTON CONTROLLED LED USING ARDUINO UNO

## 1. DESCRIPTION:
This project controls an LED using a push button connected to Arduino UNO. When the push button is pressed, the LED turns ON. When the button is released, the LED turns OFF. The circuit uses one resistor for the LED and the Arduino's internal pull-up resistor for the button.

## 2. AIM:
To interface a push button with Arduino UNO and control an LED based on the button's input state.

## 3. COMPONENTS REQUIRED:
- Arduino UNO
- Push button
- LED (Light Emitting Diode)
- 220Ω resistor
- Breadboard
- Jumper wires
- USB cable

## 4. CONNECTIONS:
- Push button terminal 1 → Arduino Digital Pin 2
- Push button terminal 2 → Arduino GND
- LED Anode (long leg) → Arduino Digital Pin 12
- LED Cathode (short leg) → 220Ω resistor
- Other end of resistor → Arduino GND

## 5. WORKING PRINCIPLE:
The push button is connected to Digital Pin 2 and GND. Arduino uses INPUT_PULLUP to activate its internal pull-up resistor.

When the button is released, Digital Pin 2 reads HIGH.

When the button is pressed, Digital Pin 2 connects to GND and reads LOW.

The program checks the button state. When the input is LOW, the LED connected to Digital Pin 12 turns ON.

When the button is released and the input becomes HIGH, the LED turns OFF.

## 6. SOFTWARE USED:
- Arduino IDE
- Tinkercad Circuits (for simulation)

## 7. SKILLS LEARNED:
- Understanding digital input and output
- Interfacing push button switches
- Using digitalRead() function
- Using digitalWrite() function
- Understanding HIGH and LOW logic states
- Learning INPUT_PULLUP
- Understanding internal pull-up resistors
- Basic Arduino programming
- Circuit design and simulation

## 8. OUTPUT:
When the push button is pressed, the LED turns ON.

When the push button is released, the LED turns OFF.

The LED responds directly to the push button operation.

## 9. APPLICATIONS:
- Push-button control systems
- Electronic switches
- Control panels
- User input systems
- Home automation
- Electronic device operation
- Simple interactive circuits
