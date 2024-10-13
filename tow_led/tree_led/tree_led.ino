int led_zero = 13;
int led_one = 12;
int led_two = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_zero, OUTPUT);
  pinMode(led_one, OUTPUT);
  pinMode(led_two, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(led_zero, HIGH);
  digitalWrite(led_one, LOW);
  digitalWrite(led_two, HIGH);
  delay(250);
  digitalWrite(led_zero, LOW);
  digitalWrite(led_one, HIGH);
  digitalWrite(led_two, LOW);
  delay(250);
}

