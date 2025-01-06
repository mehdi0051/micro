//mohsenkmt
void setup() {
for (int i=0;i<7;i++){
    pinMode(i+1, OUTPUT);
  }

}

void loop() {
  for (int i=0; i<10;i++){
    printnum(i);
    delay(1000);
  }

}

int sequence[10][7]={
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}  //9
};
void printnum(int number){
  for (int i=0;i<7;i++){
    digitalWrite(i+1, sequence[number][i]);
  }
}