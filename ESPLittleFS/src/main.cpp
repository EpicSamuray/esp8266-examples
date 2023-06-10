#include <Arduino.h>
#include <FS.h>
#include <LittleFS.h>
 
void setup() {
  Serial.begin(9600);
  
  if(!LittleFS.begin()){
    Serial.println("Fehler beim Mounten des LittleFS");
    return;
  }
  
  File file = LittleFS.open("/text.txt", "r");
  if(!file){
    Serial.println("Fehler beim Hochladen oder Lesen");
    return;
  }
  
  Serial.println("File Content:");
  while(file.available()){
    Serial.write(file.read());
  }
  file.close();
}
 
void loop() {

}