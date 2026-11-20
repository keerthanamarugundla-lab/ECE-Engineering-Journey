// C++ code
//
int brightness=0;
int fadeamount=5;
void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  analogWrite(3,brightness);
  brightness=brightness+fadeamount;
  if(brightness<=0||brightness>=255)
  {
    
   fadeamount=-fadeamount;
    
  }
  delay(30);
}
