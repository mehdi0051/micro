//mohsenkmt

void setup() {
Serial.begin(9600);

}

void loop() {
float d=analogRead(A0);
d=d*0.4887585532746823;  // float v=(d*(5.0/1023.0))*100; 
Serial.print("Temp=");
Serial.println(d);
delay(1000);

}
