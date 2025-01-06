//mohsenkmt
void setup() {
  Serial.begin(9600);
}

void loop() {
  for(float m=0; m < 360.00; m+=2){
    Serial.print(sin(m*(PI/180.00)));
    Serial.print(" ");
    Serial.println(cos(m*(PI/180.00)));
  }

}
