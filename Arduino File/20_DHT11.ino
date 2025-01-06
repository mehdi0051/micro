#include "DHT.h"
#define DHTPIN 8
#define DHTTYPE DHT11
#define T_C 700
DHT dht(DHTPIN,DHTTYPE);
int spik = 6;
void setup() {
  dht.begin();
  Serial.begin(9600);

}

void loop() {
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();
  Serial.print("Temp = ");
  Serial.println(temp);
  Serial.print("Humidity = ");
  Serial.println(hum);
  if( hum >= 90.00 )
  {
   tone(spik,T_C);
  }
  delay(500);
  noTone(spik);
}

