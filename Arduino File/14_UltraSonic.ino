//mohsenkmt
#include <LiquidCrystal.h>
int RS=12;
int E=11;
int D4=5;
int D5=4;
int D6=3;
int D7=2;
LiquidCrystal lcd(RS , E , D4 , D5 , D6 ,D7);
int tring=9;
int echo=8;
int duration;
int distances;


void setup() {
  lcd.begin(16 ,2 );
  lcd.clear();
  lcd.setCursor(0, 0);
  Serial.begin(9600);
  pinMode(tring, OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  digitalWrite(tring, LOW);
  delayMicroseconds(2);
  digitalWrite(tring, HIGH);
  delayMicroseconds(10);
  digitalWrite(tring, LOW);

  duration=pulseIn(echo ,HIGH);
  distances=(duration/2)*0.0343;
  
  Serial.println(distances);
  lcd.print(distances);
  delay(500);
  lcd.clear();


}