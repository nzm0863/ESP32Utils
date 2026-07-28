#include "wifi_config.h"

#include <wifi_manager.h>
#include <ota_manager.h>

void setup() {
    Serial.begin(115200);

    wifiConnect(WIFI_SSID, WIFI_PASSWORD);
    otaSetup("ESP32");
}

void loop() {
    otaHandle();
}