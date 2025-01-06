#include <Wire.h>

String command = "";         // مقدار دریافتی از مستر
String slaveResponse = "";   // پاسخی که به مستر ارسال می‌شود
String lastCommand = "";     // آخرین مقدار دریافتی از مستر

void setup() {
  Wire.begin(8);                  // تنظیم آدرس اسلیو
  Wire.onReceive(receiveEvent);   // ثبت تابع برای دریافت داده از مستر
  Wire.onRequest(requestEvent);   // ثبت تابع برای ارسال داده به مستر
  Serial.begin(9600);             // شروع ارتباط سریال
  pinMode(8, OUTPUT);             // تنظیم پین 8 برای LED اسلیو
}

void loop() {

  if(Serial.available()>0){
    slaveResponse=Serial.readStringUntil("\n");
    Serial.print("Slave : ");
    Serial.println(slaveResponse);
  }
  // کنترل LED اسلیو بر اساس فرمان
  if (command == "on" || command == "ON" || command == "1") {
    digitalWrite(8, HIGH);         // روشن کردن LED اسلیو
           // تنظیم پاسخ برای مستر
  } else if (command == "off" || command == "OFF" || command == "0") {
    digitalWrite(8, LOW);          // خاموش کردن LED اسلیو
             // تنظیم پاسخ برای مستر
  }
}

// تابع دریافت داده از مستر
void receiveEvent(int howMany) {
  String newCommand = "";          // مقدار موقت برای فرمان جدید
  while (Wire.available()) {
    char c = Wire.read();          // خواندن بایت‌ها از مستر
    if (isPrintable(c))            // فقط کاراکترهای چاپ‌شدنی را ذخیره کنید
      newCommand += c;
  }
  newCommand.trim();               // حذف فاصله‌های اضافی

  // اگر مقدار جدید با مقدار قبلی تفاوت داشت
  if (newCommand != lastCommand) {
    lastCommand = newCommand;      // به‌روزرسانی مقدار قبلی
    command = newCommand;          // ذخیره مقدار جدید
    Serial.print("Master : ");
    Serial.println(command);
  }
}

// تابع ارسال داده به مستر
void requestEvent() {
  Wire.write(slaveResponse.c_str()); // ارسال پاسخ به مستر
}
