int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(1200);
}

void loop() {
  // put your main code here, to run repeatedly:
//  if (Serial.available() > 0){
//    char inp = Serial.read();
//    if (inp == 'H' || inp == 'h'){
//      digitalWrite(led, HIGH);
//    } else if (inp == 'L' || inp == 'l'){
//      digitalWrite(led, LOW);
//    }
//    }

//  if (Serial.available() > 0){
//    String inp = Serial.readString();
//    if (inp == "on"){
//      digitalWrite(led, HIGH);
//    } else if (inp == "off"){
//      digitalWrite(led, LOW);
//    }
//    }


//  if (Serial.available() > 0){
//    int inp = Serial.parseInt();
//    if (inp == 101){
//      digitalWrite(led, HIGH);
//    } else if (inp == 102){
//      digitalWrite(led, LOW);
//    }
//    }

  if (Serial.available() > 0) {
    float num1 = Serial.parseFloat();
    char op = Serial.read();
    float num2 = Serial.parseFloat();

    switch (op){
      case '+':
        Serial.println( num1 + num2 );
        break;
      case '-':
        Serial.println( num1 - num2 );
        break;
      case '*':
        Serial.println( num1 * num2 );
        break;
      case '/':
        Serial.println( num1 / num2 );
        break;
    }
  }



}
