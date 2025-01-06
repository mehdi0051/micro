//mohsenkmt
#include <LiquidCrystal.h>
int RS=12;
int E=11;
int D4=5;
int D5=4;
int D6=3;
int D7=2;
LiquidCrystal lcd(RS , E , D4 , D5 , D6 ,D7);


void setup() {
  lcd.begin(16 , 2);
  lcd.clear();

}

void loop() {
  lcd.print("Hello World!!!");
  lcd.setCursor(0 , 1);
  lcd.print("LCD Tutorial");
  delay(1000);
  lcd.clear();
  
}
