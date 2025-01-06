//mohsenkmt
#include "SevSeg.h"
SevSeg sevseg;
 
void setup()
{
    //Set to 1 for single digit display
    byte numDigits = 1;
    byte digitPins[] = {};
    //Defines arduino pin connections in order: A, B, C, D, E, F, G, DP
    byte segmentPins[] = {1, 2, 3, 4, 5, 6, 7, 9};
    bool resistorsOnSegments = true;
    sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}
 
void loop()
{ 
 
   for(int i = 0; i < 10; i++)
   {
     sevseg.setNumber(i);
     sevseg.refreshDisplay(); 
     delay(1000);
     
   }
}