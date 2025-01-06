//mohsenkmt
#include "pitches.h"
int melody[] = {
NOTE_C4, NOTE_G3,NOTE_G3, NOTE_GS3, NOTE_G3,0, NOTE_B3, NOTE_C4};
int melody1[] = {
NOTE_GS1, NOTE_A1,NOTE_B1, NOTE_E2, NOTE_C3, NOTE_G5, NOTE_F6};

int noteDurations[] = {
4, 8, 8, 4,4,4,4,4 
};
int noteDurations1[] = {
3, 20, 29, 5,5,6,6,8 
};
int noteDurations2[] = {
4, 5, 8, 4,2,4,4,2 
};
void setup() {

}

void loop() {
for (int thisNote = 0; thisNote < 8; thisNote++) {
int noteDuration = 1000/noteDurations[thisNote];
tone(8, melody[thisNote],noteDuration);
delay(noteDuration +30);
}
for (int thisNote = 0; thisNote < 8; thisNote++) {
int noteDuration = 1000/noteDurations[thisNote];
tone(8, melody1[thisNote],noteDuration);
delay(noteDuration +30);
}
for (int thisNote = 0; thisNote < 8; thisNote++) {
int noteDuration = 1000/noteDurations1[thisNote];
tone(8, melody1[thisNote],noteDuration);
delay(noteDuration +30);
}
for (int thisNote = 0; thisNote < 8; thisNote++) {
int noteDuration = 1000/noteDurations2[thisNote];
tone(8, melody1[thisNote],noteDuration);
delay(noteDuration +30);
}
}