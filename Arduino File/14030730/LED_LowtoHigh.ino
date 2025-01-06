//mohsenkmt

int ledpin=6;

void setup() {
pinMode(ledpin, OUTPUT);
}

void loop() {
 for(int i=0 ; i<=255 ;i+=5){
  analogWrite(ledpin, i);
  delay(10);
 }
 for(int i=255 ; 0<=i ;i-=5){
  analogWrite(ledpin, i);
  delay(10);
 }

}
