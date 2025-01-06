//mohsenkmt
int v=0;
void setup() {
 pinMode(9, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(10, OUTPUT);

}

void loop() {
int p=analogRead(A0);
v=map(p,0,1023,0,255);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
analogWrite(10, v);
delay(50);
}
