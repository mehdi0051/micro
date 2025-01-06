//mohsenkmt
#include <Keypad.h>
float firstNumber = 0;
float secondNumber = 0;
float result = 0;
bool section = false;
int type = 0;


  char hexaKeys[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte colPins[4] = {6, 5, 4, 3}; 
byte rowPins[4] = {10, 9, 8, 7}; 

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, 4, 4); 

void setup() {
  Serial.begin(9600);  
}

void loop() {

  int button = int(customKeypad.getKey()) - 48;
  if (0 <= button && button <= 10) {
    Serial.print(button);
    if (section == false) {
      firstNumber = firstNumber * 10 + button;
    } else {
      secondNumber = secondNumber * 10 + button;
    }
  } else {
    switch (button) {
      case 17://A

        section = true;
        type = 1;
        Serial.print('+');
        break;
      case 18://///B

        section = true;
        type = 2;
        Serial.print('-');
        break;
      case 19:////C

        section = true;
        type = 3;
        Serial.print('*');
        break;
      case 20:////D

        section = true;
        type = 4;
        Serial.print('/');
        break;
      case -6:////*

        section = false;
        type = 0;
        Serial.println(' ');
        break;

      case -13://///#
        Serial.print(" = ");
        switch (type) {
          case 1:
            result = (firstNumber + secondNumber);
            break;
          case 2:
            result = (firstNumber - secondNumber);
            break;
          case 3:
            result = (firstNumber * secondNumber);
            break;
          case 4:
            result = (firstNumber / secondNumber);
            break;
        }
        type = 0;
        Serial.println(result);
        firstNumber = 0;
        secondNumber = 0;
        section = false;
        break;

    }
  }
}