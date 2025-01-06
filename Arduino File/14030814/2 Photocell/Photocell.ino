//mohsenkmt
int p_sen;
int led=13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  p_sen= analogRead(A0);
  Serial.print("Sensor Value= ");
  Serial.println(p_sen);
  delay(300);
  if(p_sen >700)
  {
    digitalWrite(led,LOW);
  }
  else
  {
   digitalWrite(led,HIGH);
  }
}
