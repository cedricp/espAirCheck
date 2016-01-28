#include "dht.h"

#define DHT22_PIN 2
DHT dht;

void setup() {
  // put your setup code here, to run once:
  dht.setup(DHT22_PIN);
}

void loop() {
  // put your main code here, to run repeatedly:
    /// Please dont stop software watchdog too long (less than 6 seconds),
    /// otherwise it will trigger hardware watchdog reset.
  float humidity = dht.getHumidity();
  float temperature = dht.getTemperature(); // Returns in Celcius
}
