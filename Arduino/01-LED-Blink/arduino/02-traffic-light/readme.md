// C++ code
//
// Define Arduino pin numbers for the LEDs
const int RED_LED = 13;
const int YELLOW_LED = 12;
const int GREEN_LED = 11;

void setup() {
  // Configure the LED pins as outputs
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // 1. RED LIGHT ON (Vehicles Stop) - 5 Seconds
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  delay(5000); 

  // 2. GREEN LIGHT ON (Vehicles Go) - 5 Seconds
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(2000); 

  // 3. YELLOW LIGHT ON (Vehicles Slow Down) - 2 Seconds
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(5000); 
}
