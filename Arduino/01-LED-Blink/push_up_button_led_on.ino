// C++ code
//
int button=2;
int RED_led=13;
int button2=4;
int white_led=12;
void setup()
{
  pinMode(button, INPUT_PULLUP);
  pinMode(RED_led,OUTPUT);
  pinMode(button2,INPUT_PULLUP);
  pinMode(white_led,OUTPUT);
}

void loop()
{
  int set=digitalRead(button);
  int set2=digitalRead(button2);
  if(set==LOW){
    digitalWrite(RED_led,HIGH);
  }
  else{
    digitalWrite(RED_led,LOW);
  }
  if(set2==LOW){
    digitalWrite(white_led,HIGH);
  }
  else{
     digitalWrite(white_led,LOW);
  }
}
    
    
