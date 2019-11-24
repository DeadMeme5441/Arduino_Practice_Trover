
#include <DHT_U.h>

#include <dht.h>

dht DHT;
#define DHT11_PIN 7
void setup() {
  Serial.begin(9600);

}

void loop() {
  int chk = DHT.read(DHT11_PIN)
  Serial.print("Humidity : ");
  Serial.println("DHT.humidity);
  Serial.print("Temperature : ");
  Serial.println(DHT.temperature);
  delay(1000);

}
