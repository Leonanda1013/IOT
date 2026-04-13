#include <Arduino.h>

#define sensorLDR 32
int nilaiSensor;
int nilaiTerbalik;

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Sensor LDR - ESP32");
}

void loop() {
  nilaiSensor = analogRead(sensorLDR);
  nilaiTerbalik = 1024 - nilaiSensor; // 0 = gelap, 4095 = terang

  Serial.print("Nilai Sensor : ");
  Serial.println(nilaiTerbalik);
  delay(1000);
}