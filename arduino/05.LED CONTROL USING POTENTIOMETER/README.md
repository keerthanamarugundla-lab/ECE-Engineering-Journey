# PROJECT 5: LED CONTROL USING POTENTIOMETER AND ARDUINO UNO

## 1. DESCRIPTION:
This project uses a potentiometer to control an LED using Arduino UNO. The potentiometer changes the input voltage, and Arduino reads this voltage through an analog input pin. Based on the potentiometer value, the LED is controlled.

## 2. AIM:
To interface a potentiometer with Arduino UNO and understand analog input readings and LED control.

## 3. COMPONENTS REQUIRED:
- Arduino UNO
- Potentiometer (10kΩ)
- LED
- 220Ω resistor
- Breadboard
- Jumper wires
- USB cable

## 4. CONNECTIONS:
- Potentiometer first terminal → Arduino 5V
- Potentiometer middle terminal (wiper) → Arduino Analog Pin A0
- Potentiometer third terminal → Arduino GND
- LED Anode → Arduino Digital Pin 9 through 220Ω resistor
- LED Cathode → GND

## 5. WORKING PRINCIPLE:
The potentiometer acts as a variable voltage divider.

When the potentiometer knob is rotated, its output voltage changes.

Arduino reads this changing voltage through Analog Pin A0 using analogRead().

The analog value ranges from 0 to 1023.

The program converts the analog value into a PWM value from 0 to 255 using map().

Arduino uses analogWrite() to control the LED brightness.

When the potentiometer is rotated, the LED brightness changes.

## 6. SOFTWARE USED:
- Arduino IDE
- Tinkercad Circuits

## 7. SKILLS LEARNED:
- Understanding potentiometers
- Analog input reading
- Using analogRead()
- Understanding ADC values
- Using map() function
- PWM output control
- Using analogWrite()
- LED brightness control
- Circuit simulation

## 8. OUTPUT:
Rotating the potentiometer knob changes the LED brightness.

At a lower potentiometer value, the LED brightness decreases.

At a higher potentiometer value, the LED brightness increases.

## 9. APPLICATIONS:
- LED brightness control
- Volume control
- Speed control
- Adjustable electronic systems
- Light intensity control
- Analog input applications 
