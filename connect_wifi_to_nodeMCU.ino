#include<WiFi.h>
const char* ssid = "Still Rollin"; // Wifi SSID
const char* password = "Jai Shree Ram"; // Wifi Password



void setup() {
 WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED) (delay(500)); // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
