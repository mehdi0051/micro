//mohsenkmt
int led_pin=11;

void setup() {
  pinMode(led_pin,OUTPUT);
  pinMode(9,INPUT);

}

void loop() {
if (digitalRead(9)==LOW)
{
  digitalWrite(led_pin, HIGH);
}
else
{
  digitalWrite(led_pin, LOW);
}

}
