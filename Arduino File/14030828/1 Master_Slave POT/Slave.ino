#include <Wire.h>

int slavePotValue = 0;   // مقدار پتانسیومتر اسلیو
int masterPWMValue = 0;  // مقدار PWM دریافتی از مستر

void setup() {
  Wire.begin(100);                // تنظیم آدرس اسلیو 8
  Wire.onReceive(receiveEvent); // ثبت تابع دریافت داده
  Wire.onRequest(requestEvent); // ثبت تابع ارسال داده
  Serial.begin(9600);           // شروع ارتباط سریال
  pinMode(9, OUTPUT);           // تنظیم پین 8 برای خروجی PWM (LED اسلیو)
}

void loop() {
  // خواندن مقدار پتانسیومتر
  slavePotValue = analogRead(A0);

  // اعمال مقدار دریافتی به LED اسلیو
  analogWrite(9, masterPWMValue);

  // نمایش مقادیر در سریال مانیتور
  Serial.print("Slave PWM: ");
  Serial.print(map(slavePotValue, 0, 1023, 0, 255));
  Serial.print(" | Master PWM: ");
  Serial.println(masterPWMValue);

  delay(100);  // تاخیر کوتاه
}

// تابع دریافت داده از مستر
void receiveEvent(int howMany) {
  if (Wire.available()) {
    masterPWMValue = Wire.read();  // خواندن مقدار PWM از مستر
  }
}

// تابع ارسال داده به مستر
void requestEvent() {
  int slavePWM = map(slavePotValue, 0, 1023, 0, 255);  // تبدیل مقدار پتانسیومتر
  Wire.write(slavePWM);                                // ارسال مقدار به مستر
}
