#include "danOTA.h"
#include "ESP32_Cam.h"

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Device: AI Thinker ESP32-CAM");
  Serial.println("HINT: To upload code with Motherboard press Reset button on _the_ board during connection...");
  
  ESP32_Cam_setup();  
  OTA_init();         // danOTA.h Over The Air
}

void loop() {
  ArduinoOTA.handle();
  ESP32_Cam_loop();
}
