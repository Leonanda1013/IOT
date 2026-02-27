#include <Arduino.h>



void setup() {
 

  Serial.begin(115200);
}

void loop() {
  Serial.println("Hello world");
delay(1000);
}



#include <Arduino.h>

#define LED_BUILTIN 2  // GPIO2 = LED bawaan ESP32

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // Set GPIO2 sebagai OUTPUT
}


void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // Coba LOW untuk nyala
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);  // Coba HIGH untuk mati
  delay(1000);
}

