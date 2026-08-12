#include "ota_manager.h"
#include <ArduinoOTA.h>
#include <ESPmDNS.h>

void otaSetup(const char* hostname) {
  if (MDNS.begin(hostname)) {
    Serial.printf("mDNS started: %s.local\n", hostname);
  } else {
    Serial.println("mDNS failed");
  }

  ArduinoOTA.setHostname(hostname);

  ArduinoOTA.onStart([hostname]() {
    Serial.printf("OTA Start (%s)\n", hostname);
  });

  ArduinoOTA.onEnd([]() {
    Serial.println("\nOTA End");
  });

  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
    Serial.printf("Progress: %u%%\r", (progress * 100) / total);
  });

  ArduinoOTA.onError([](ota_error_t error) {
    Serial.printf("Error[%u]\n", error);
  });

  ArduinoOTA.begin();
}