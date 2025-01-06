//mohsenkmt

#define key1 digitalRead(A0)

void setup() {
  pinMode(A0, INPUT);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop() {
int i,a;
int danclight1[6][5]={
  {1,0,0,0,0},
  {0,1,1,0,0},
  {0,0,1,1,0},
  {0,0,0,1,1},
  {0,0,0,0,1}
};


for (i=0;i<=4;i++){
  digitalWrite(i, 0);
}

if ( key1 == 0 ){
 for ( a=0; (a<=5) ;a++){
  for (i=0;i<=4;i++){
    digitalWrite(i,danclight1[a][i]);
  }
  delay(200);
 }
}



}
