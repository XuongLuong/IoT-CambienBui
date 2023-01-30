#include <FirebaseArduino.h>
#include <ESP8266WiFi.h>


const char* tenwf = "Khoicoffee xiaomi";
const char* mkwifi = "xincamon";



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("");
  Serial.print("Ket noi den wifi:");
  Serial.println(tenwf);
  WiFi.begin(tenwf, mkwifi);
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
    Serial.print("sai");
  }
  Serial.println("");
  Serial.println("Wifi da duoc ket noi");
  Serial.println("Dia chi IP:");

  Firebase.begin("long2-b1ce1-default-rtdb.firebaseio.com" , "GE4m8blc35FXrAbjvEibshMCrWqmvsMAaZzkDxp3");
  }

void loop() {
  // put your main code here, to run repeatedly:
  Firebase.setFloat("nongdo", 300);
  Serial.println("in dc");
  delay(1000);

}