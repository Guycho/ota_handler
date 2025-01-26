#include <Arduino.h>
#include <OTAHandler.h>
#include <WiFi.h>

// Replace with your WiFi credentials
const char *credentials[][2] = {{"SSID1", "PASSWORD1"}, {"SSID2", "PASSWORD2"}};

OTAHandler otaHandler("ESP32-OTA", credentials, 2, 60, true);

void setup() {
    Serial.begin(115200);
    if (otaHandler.init()) {
        Serial.println("OTA initialized successfully");
    } else {
        Serial.println("Failed to initialize OTA");
    }
}

void loop() { otaHandler.run(); }