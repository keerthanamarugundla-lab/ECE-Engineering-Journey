# PROJECT 7: ULTRASONIC SENSOR WITH BUZZER USING ARDUINO UNO

## 1. DESCRIPTION:
This project uses an ultrasonic sensor (HC-SR04) to measure the distance between the sensor and an object. Arduino calculates the distance using ultrasonic sound waves. When an object comes within a specified distance, the buzzer turns ON to alert the user.

## 2. AIM:
To interface an ultrasonic sensor and buzzer with Arduino UNO and design an object detection and distance alert system.

## 3. COMPONENTS REQUIRED:
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- Buzzer
- Breadboard (if required)
- Jumper wires
- USB cable

## 4. CONNECTIONS:
- HC-SR04 VCC → Arduino 5V
- HC-SR04 GND → Arduino GND
- HC-SR04 TRIG → Arduino Digital Pin 9
- HC-SR04 ECHO → Arduino Digital Pin 10
- Buzzer positive (+) → Arduino Digital Pin 8
- Buzzer negative (−) → Arduino GND

## 5. WORKING PRINCIPLE:
The ultrasonic sensor sends an ultrasonic sound pulse through its Trigger pin.

The sound wave travels through the air and reflects back when it hits an object.

The Echo pin receives the reflected signal.

Arduino measures the time taken for the sound wave to travel to the object and return.

The distance is calculated using the speed of sound.

When the object is detected within the programmed distance, Arduino activates the buzzer.

When the object is farther away, the buzzer remains OFF.

## 6. SOFTWARE USED:
- Arduino IDE
- Tinkercad Circuits

## 7. SKILLS LEARNED:
- Understanding ultrasonic sensors
- Interfacing HC-SR04
- Measuring distance
- Using digital input and output
- Understanding pulse timing
- Using pulseIn() function
- Distance calculation
- Buzzer control
- Basic sensor-based automation

## 8. OUTPUT:
The ultrasonic sensor measures the distance of an object.

When the object comes closer than the specified threshold, the buzzer turns ON.

When the object moves away beyond the threshold, the buzzer turns OFF.

## 9. APPLICATIONS:
- Obstacle detection
- Parking assistance
- Distance measurement
- Robotics
- Object detection systems
- Alert systems
- Smart devices
