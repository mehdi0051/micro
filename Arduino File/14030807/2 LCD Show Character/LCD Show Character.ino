//mohsenkmt
#include <LiquidCrystal.h>
int RS=12;
int E=11;
int D4=5;
int D5=4;
int D6=3;
int D7=2;
LiquidCrystal lcd(RS , E , D4 , D5 , D6 ,D7);

byte armsDown[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};

byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};


void setup() {
  lcd.begin(16 ,2 );
  lcd.clear();
  lcd.createChar(3, armsDown);
  lcd.createChar(4, armsUp);
  lcd.setCursor(0, 0);

}

void loop() {
   int sensorReading = analogRead(A0);
  int delayTime = map(sensorReading, 0, 1023, 250, 800);
  for (int i=0; i<16 ;i++)
  {
    if (i > 0)
    {
      lcd.clear();
    }
    if(i%2==0)
    {
    lcd.setCursor(i, 0);
    lcd.write(3);
    delay(delayTime);
    }else
    {
    lcd.setCursor(i, 0);
    lcd.write(4);
    delay(delayTime);
    }
  }
  lcd.clear();
  
for (int j=15; j>=0 ;j--)
  {
    if (j >= 0)
    {
      lcd.setCursor(j + 1, 1);
      lcd.write(' ');
    }
    if(j%2==0)
    {
    lcd.setCursor(j, 1);
    lcd.write(4);
    delay(delayTime);
    }else
    {
    lcd.setCursor(j, 1);
    lcd.write(3);
    delay(delayTime);
    }
    
  }
  lcd.clear();

}