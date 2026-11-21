
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 6;

long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    noTone(buzzer);
    return;
  }

  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance <= 10) {
    tone(buzzer, 1000);
  }
  else {
    noTone(buzzer);
  }

  delay(100);
}
