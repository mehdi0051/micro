//mohsenkmt
#define T_C 356
#define T_D 481
#define T_E 386
#define T_F 347

int C =10;
int D =9;
int E =8;
int F=7;

int spek=6;

void setup() {
 for (int i=7;i<11;i++)
 {
  pinMode(i, INPUT);
  digitalWrite(i, HIGH);
 }
}

void loop() {
   noTone(spek);
 while(digitalRead(C)==LOW)
 {
  tone(spek,T_C);
 }
 while(digitalRead(D)==LOW)
 {
  tone(spek,T_D);
 }
while(digitalRead(E)==LOW)
 {
  tone(spek,T_E);
 }
 while(digitalRead(F)==LOW)
 {
  tone(spek,T_F);
 }
}