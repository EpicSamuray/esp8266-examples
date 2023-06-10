#include <Arduino.h>
#include <ESP8266WiFi.h>

const char* ssid = "CobeAP";
const char* password = "123456789";

void setup() {
  Serial.begin(115200);
  Serial.print("Setting AP");
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP Adress: ");
  Serial.println(IP);
  Serial.println(WiFi.localIP());
}

void loop() {

}
