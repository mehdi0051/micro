//mohsenkmt
const int SW_pin = 7;
const int X_pin = 0; 
const int Y_pin = 1; 
int Led_pin= 8;
int j_Value= 0;
 
void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
  pinMode(Led_pin, OUTPUT);
}
 
void loop() {
  j_Value=analogRead(X_pin);
  int n_j_Value=map(j_Value,0,1023,0,255);
  analogWrite( Led_pin , n_j_Value);
  delay(120);
}