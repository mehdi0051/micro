//mohsenkmt
#define key1 digitalRead(A0)

void setup() {
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
}

void loop() {

if ( key1 == 0 ){
int ran_num=random(1,7);
Serial.println(ran_num);
for (int i=0;i<=8;i++){
  digitalWrite(i, LOW);
}
delay(300);
    if (ran_num == 1){
    digitalWrite(2, HIGH);
    }
    if (ran_num == 2){
    digitalWrite(3, HIGH);
    }
    if (ran_num == 3){
    digitalWrite(4, HIGH);
    }
    if (ran_num == 4){
    digitalWrite(5, HIGH);
    }
    if (ran_num == 5){
    digitalWrite(6, HIGH);
    }
    if (ran_num == 6){
    digitalWrite(7, HIGH);
    }
}  
}