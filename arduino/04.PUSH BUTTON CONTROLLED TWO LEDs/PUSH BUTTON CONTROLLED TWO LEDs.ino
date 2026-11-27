// Project: Push Button Control of Two LEDs

int button1 = 2;
int button2 = 3;

int led1 = 11;
int led2 = 12;

int state1 = 0;
int state2 = 0;

void setup()
{
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  state1 = digitalRead(button1);
  state2 = digitalRead(button2);

  if (state1 == LOW)
  {
    digitalWrite(led1, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
  }

  if (state2 == LOW)
  {
    digitalWrite(led2, HIGH);
  }
  else
  {
    digitalWrite(led2, LOW);
  }
}
