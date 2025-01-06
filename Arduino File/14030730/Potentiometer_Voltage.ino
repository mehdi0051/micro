//mohsenkmt

int ledpin=6;
float val=0;

void setup() {
pinMode(ledpin, OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
 val=analogRead(A0);
 Serial.print("Voltage is = ");
 Serial.println(val/204.6);
 delay(1000);
}
