//mohsenkmt
#include <SoftwareSerial.h>
SoftwareSerial MyBlue(2, 3); // RX | TX 
String flag; 
int LED = 8; 
void setup() 
{   
  Serial.begin(9600); 
  MyBlue.begin(9600); 
  pinMode(LED, OUTPUT); 
  Serial.println("Ready to connect\nDefualt password is 1234 or 0000"); 
} 
void loop() 
{ 
  if (MyBlue.available()) 
  {
    flag = MyBlue.readString();
    flag.trim();
  }
  if (flag == "1" || flag=="ON" || flag=="on") 
  { 
    digitalWrite(LED, HIGH); 
    Serial.println("LED On"); 
  } 
  else if (flag == "0" || flag=="OFF" || flag=="off") 
  { 
    digitalWrite(LED, LOW); 
    Serial.println("LED Off"); 
  } 
}
