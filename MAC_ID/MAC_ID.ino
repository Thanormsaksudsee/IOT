#include <ESP8266WiFi.h>

void setup(){
  Serial.begin(115200);
  Serial.println();
  Serial.print("ESP MAC");
  Serial.println(WiFi.macAddress());
}

void loop (){}