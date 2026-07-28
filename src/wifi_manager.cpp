#include "wifi_manager.h"
#include <WiFi.h>

void wifiConnect(const char* ssid, const char* password) {
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println();
    Serial.println("WiFi Connected!");
    Serial.println(WiFi.localIP());
}