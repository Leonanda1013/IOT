// // #include <Arduino.h>

// // #define RED_LED 15
// // #define GREEN_LED 16
// // #define BLUE_LED 18

// // void setup() {
// //   Serial.begin(115200);
// //   pinMode(RED_LED, OUTPUT);
// //   pinMode(GREEN_LED, OUTPUT);
// //   pinMode(BLUE_LED, OUTPUT);

// //   // Matikan semua LED dulu (Common Anode = HIGH untuk mati)
// //   digitalWrite(RED_LED, HIGH);
// //   digitalWrite(GREEN_LED, HIGH);
// //   digitalWrite(BLUE_LED, HIGH);

// //   Serial.println("Contoh Program LED RGB");
// // }

// // void rgbLED(){
// //   digitalWrite(RED_LED, HIGH);   // nyala
// //   digitalWrite(GREEN_LED, LOW); // mati
// //   digitalWrite(BLUE_LED, LOW);  // mati
// //   Serial.println("LED Merah nyala");
// //   delay(1000);

// //   digitalWrite(RED_LED, LOW);  // mati
// //   digitalWrite(GREEN_LED, HIGH);  // nyala
// //   digitalWrite(BLUE_LED, LOW);  // mati
// //   Serial.println("LED Hijau nyala");
// //   delay(1000);

// //   digitalWrite(RED_LED, LOW);  // mati
// //   digitalWrite(GREEN_LED, LOW); // mati
// //   digitalWrite(BLUE_LED, HIGH);   // nyala
// //   Serial.println("LED Biru nyala");
// //   delay(1000);
// // }

// // void loop() {
// //   rgbLED();
// // }


// #include <Arduino.h>
// #define LED_red 2// GPIO2 = LED bawaan ESP32
// #define RED_LED 15  //led warna merah
// #define GREEN_LED 16 //led warna hijau
// #define BLUE_LED 18  //led warnah biru

// void setup()
// {
//  Serial.begin(115200);
//  pinMode(RED_LED, OUTPUT); //atur pin-pin digital sebagai output

//  Serial.println("Contoh Program LED SOS");
// }

// void loop()
// {
//  // 3 dits (3 titik atau huruf S)
//  for (int x = 0; x < 3; x++)
//  {
//    digitalWrite(RED_LED, HIGH); // LED nyala
//    delay(150);                  // delay selama 150ms
//    digitalWrite(RED_LED, LOW); // LED mati
//    delay(100);                  // delay selama 100ms
//  }
//  delay(100);

//  // 3 dahs (3 garis atau huruf O)
//  for (int x = 0; x < 3; x++)
//  {
//    digitalWrite(RED_LED, HIGH); // LED nyala
//    delay(400);                  // delay selama 400ms
//    digitalWrite(RED_LED, LOW); // LED mati
//    delay(100);                  // delay selama 100ms
//  }

//  // 100ms delay to cause slight gap between letters
//  delay(100);
//  // 3 dits again (3 titik atau huruf S)
//  for (int x = 0; x < 3; x++)
//  {
//    digitalWrite(RED_LED, HIGH); // LED nyala
//    delay(150);                  // delay selama 150ms
//    digitalWrite(RED_LED, LOW); // LED mati
//    delay(100);                  // delay selama 100ms
//  }

//  // wait 5 seconds before repeating the SOS signal
//  delay(3000);
// }

#include <Arduino.h>

#define RED_LED 2    // LED merah (single)
#define GREEN_LED 16  // LED RGB - hijau
#define BLUE_LED 18   // LED RGB - biru
#define RGB_RED 15    // LED RGB - merah (ganti pin agar tidak bentrok)

void setup() {
  Serial.begin(115200);
  pinMode(RED_LED, OUTPUT);
  pinMode(RGB_RED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  // Matikan semua LED (Common Anode)
  digitalWrite(RED_LED, LOW);
  digitalWrite(RGB_RED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(BLUE_LED, LOW);

  Serial.println("Program SOS + RGB");
}

// Fungsi SOS pakai LED merah single
void sosSingle() {
  // 3 titik (S)
  for (int x = 0; x < 3; x++) {
    digitalWrite(RED_LED, LOW);
    delay(150);
    digitalWrite(RED_LED, HIGH);
    delay(100);
  }
  delay(100);

  // 3 garis (O)
  for (int x = 0; x < 3; x++) {
    digitalWrite(RED_LED, LOW);
    delay(400);
    digitalWrite(RED_LED, HIGH);
    delay(100);
  }
  delay(100);

  // 3 titik (S)
  for (int x = 0; x < 3; x++) {
    digitalWrite(RED_LED, LOW);
    delay(150);
    digitalWrite(RED_LED, HIGH);
    delay(100);
  }
}

// Fungsi RGB ganti warna
void rgbLED() {


  // Hijau
  digitalWrite(RGB_RED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(BLUE_LED, LOW);
  Serial.println("RGB: Hijau");
  delay(1000);

  // Hijau
  digitalWrite(RGB_RED, LOW);
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(BLUE_LED, LOW);
  Serial.println("RGB: Hijau");
  delay(1000);

    // Hijau
  digitalWrite(RGB_RED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(BLUE_LED, LOW);
  Serial.println("RGB: Hijau");
  delay(1000);


}

void loop() {
  sosSingle(); // LED merah SOS
  rgbLED();    // LED RGB ganti warna
  delay(3000);
}