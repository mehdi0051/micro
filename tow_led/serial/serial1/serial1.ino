int led1 = 13;
int led2 = 12;
int led3 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    char inp = Serial.read();
    if (inp == '1'){
      digitalWrite(led1, HIGH);
      } else if(inp == '2'){
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        } else if (inp == '3'){
          digitalWrite(led2, LOW);
          digitalWrite(led3, HIGH);
          } else if (inp == '4'){
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
          }
          }
  }

