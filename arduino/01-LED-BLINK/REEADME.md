# PROJECT 1: LED BLINKING USING ARDUINO

## 1. DESCRIPTION:
The LED Blinking project is a basic Arduino project in which an LED (Light Emitting Diode) is switched ON and OFF continuously at regular time intervals using Arduino programming.

## 2. AIM:
To understand the basic operation of Arduino digital output pins and learn how to control an LED using a simple program.

## 3. COMPONENTS REQUIRED:
- Arduino UNO
- LED (Light Emitting Diode)
- 220Ω resistor
- Breadboard
- Jumper wires
- USB cable

## 4. CONNECTIONS:
- LED Anode (long leg) → Arduino Digital Pin 13
- LED Cathode (short leg) → 220Ω resistor
- Other end of resistor → Arduino GND
- Arduino UNO → Connected to computer through USB

## 5. WORKING PRINCIPLE:
Arduino sends HIGH (5V) voltage to Digital Pin 13, which turns ON the LED. After a delay of 1 second, Arduino sends LOW (0V), which turns OFF the LED.

This ON and OFF operation repeats continuously, producing a blinking effect.

## 6. SOFTWARE USED:
- Arduino IDE
- Tinkercad Circuits (for simulation)

## 7. PROGRAM:

```cpp
// Project: LED Blinking Using Arduino UNO

int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  digitalWrite(ledPin, HIGH);
  delay(1000);

  digitalWrite(ledPin, LOW);
  delay(1000);
}
```

## 8. SKILLS LEARNED:
- Understanding Arduino UNO
- Identifying digital pins
- Learning pinMode() function
- Learning digitalWrite() function
- Understanding HIGH and LOW states
- Learning delay() function
- Basic circuit connections
- Understanding Arduino programming structure
- Hardware simulation using Tinkercad

## 9. OUTPUT:
The LED turns ON for 1 second and turns OFF for 1 second continuously, creating a blinking effect.

## 10. APPLICATIONS:
- Indicator lights
- Warning signals
- Status indicators in electronic devices
- Learning basic embedded system programming
- Testing digital output pins
