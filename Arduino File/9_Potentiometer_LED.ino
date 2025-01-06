//mohsenkmt

int ledpin=6;
int val=0;

void setup() {
pinMode(ledpin, OUTPUT);
pinMode(A0,INPUT);
}

void loop() {
 val=analogRead(A0);
 int newval= map(val,0,1023,0,255);
 analogWrite(ledpin, newval);

}