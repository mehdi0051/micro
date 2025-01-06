//mohsenkmt
#include <Keypad.h>
  char hexaKeys[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
byte colPins[4] = {6, 5, 4, 3}; 
byte rowPins[4] = {10, 9, 8, 7}; 

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, 4, 4); 

void setup(){
  Serial.begin(9600);
}
void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
}