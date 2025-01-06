//mohsenkmt
int ledpin=13;
int butpin=2;

void setup()
{
  pinMode(ledpin, OUTPUT);
  pinMode(butpin, INPUT_PULLUP);
}

void loop()
{
  
  int pinstate=0;
  pinstate=digitalRead(butpin);
  if (pinstate==HIGH)
  {
    digitalWrite(ledpin, HIGH);
  }
  else {
    digitalWrite(ledpin, LOW);
  }
}