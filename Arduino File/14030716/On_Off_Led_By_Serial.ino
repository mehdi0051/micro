int led=13;
// تعریف متغیر گلوبال برای ال ای دی خروجی که در صورت نیاز به تغییر پین خروجی از این قسمت استفاده شود

// فانکشن ستاپ که فقط یکبار اجرا می شود void setup
void setup() {
  pinMode(led,OUTPUT);
  // با دستور پین مود حالت پین را مشخص می کنیم که در اینجا پین خروجی است
  Serial.begin(9600);
  // نرخ باند سریال را مشخص می کتیم
  Serial.println("Enter the number 101 or ON or H to turn on the LED");
  //دستور چاپ پیغام سریال
  Serial.println("Enter the number 201 or OFF or L to turn off the LED");
  //دستور چاپ پیغام سریال
}


// فانکشن لوپ که به طور مداوم اجرا می شود void loop
void loop() {
  if (Serial.available() >0 ){
    String input=Serial.readStringUntil('\n');
    if (input =="on" || input =="ON" || input =="On" || input =="H" || input =="h" || input=="101"){
      digitalWrite(led, HIGH);
      Serial.println("LED turn On");
    }
      else if (input =="off" || input =="OFF" || input =="Off" || input =="L" || input =="l" || input=="201"){
        digitalWrite(led, LOW);
        Serial.println("LED turn Off");
      }
  }
}
// با اجرای این کد با وارد کردن عدد 101 ال ای دی روشن و با وارد کردن عدد 201ال ای دی خاموش می شود