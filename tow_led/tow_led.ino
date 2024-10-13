int led_zero = 13;
int led_one = 12;


void setup() {
  // put your setup code here, to run once:
  pinMode(led_zero, OUTPUT);
  pinMode(led_one, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_zero, HIGH);
  digitalWrite(led_one, HIGH);
  delay(1000);
  digitalWrite(led_zero, LOW);
  digitalWrite(led_one, LOW);
  delay(1000);
  
}
