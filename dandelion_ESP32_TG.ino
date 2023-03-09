#include "ESP32_Cam.h"
#include "danOTA.h"

void setup() {
  Serial.begin(115200);
  Serial.println();
  OTA_init();         // danOTA.h Over The Air
  ESP32_Cam_setup();  
}

void loop() {
  ArduinoOTA.handle();
  ESP32_Cam_loop();
}
