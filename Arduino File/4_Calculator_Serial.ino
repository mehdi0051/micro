float num1;
float num2;
float result;
char  operand;
void setup() {
  Serial.begin(9600);
  Serial.println("Operation Example:Number1+Number2");
}

void loop() {
 while (Serial.available() >1 )
{
    num1=Serial.parseFloat();
    operand=Serial.read();
    num2=Serial.parseFloat();
    
    
    switch (operand)
  {
    case '+' :
    result=num1+num2;
    Serial.print(num1);
    Serial.print(operand);
    Serial.println(num2);
    Serial.print("Result=");
    Serial.println(result);
    Serial.flush();
    Serial.println();
    Serial.println("Operation Example:Number1+Number2");
    break;

    case '-' :
    result=num1-num2;
    Serial.print(num1);
    Serial.print(operand);
    Serial.println(num2);
    Serial.print("Result=");
    Serial.println(result);
    Serial.flush();
    Serial.println();
    Serial.println("Operation Example:Number1+Number2");
    break;

    case '/' :
    if(num2==0){
      Serial.print(num1);
      Serial.print(operand);
      Serial.println(num2);
      Serial.println("Error : Division by zero is not allowed");
      Serial.println();
      break;}
    else 
    result=num1/num2;
    Serial.print(num1);
    Serial.print(operand);
    Serial.println(num2);
    Serial.print("Result=");
    Serial.println(result);
    Serial.flush();
    Serial.println();
    Serial.println("Operation Example:Number1+Number2");
    break;
    case '*' :
    result=num1*num2;
    Serial.print(num1);
    Serial.print(operand);
    Serial.println(num2);
    Serial.print("Result=");
    Serial.println(result);
    Serial.flush();
    Serial.println();
    Serial.println("Operation Example:Number1+Number2");
    break;
    default:
    Serial.print(num1);
    Serial.print(operand);
    Serial.println(num2);
    Serial.println("Error Input");
    result=0;
    Serial.println();
    Serial.println("Operation Example:Number1+Number2");

  }
}
}

