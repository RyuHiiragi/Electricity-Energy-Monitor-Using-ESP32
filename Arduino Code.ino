#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <PZEM004Tv30.h>

// Replace with your Wi-Fi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// Replace with your Blynk authentication token
const char* authToken = "YOUR_BLYNK_AUTH_TOKEN";

// Initialize PZEM-004T
PZEM004Tv30 pzem(Serial2, 16, 17); // RX2 (GPIO16), TX2 (GPIO17)

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Wi-Fi connected");

  // Initialize Blynk
  Blynk.begin(authToken, ssid, password);

  // Reset PZEM energy counter
  pzem.resetEnergy();
}

void loop() {
  // Read data from PZEM-004T
  float voltage = pzem.voltage();
  float current = pzem.current();
  float power = pzem.power();
  float energy = pzem.energy();

  // Print data to Serial Monitor
  Serial.print("Voltage: "); Serial.print(voltage); Serial.println(" V");
  Serial.print("Current: "); Serial.print(current); Serial.println(" A");
  Serial.print("Power: "); Serial.print(power); Serial.println(" W");
  Serial.print("Energy: "); Serial.print(energy); Serial.println(" Wh");

  // Send data to Blynk
  Blynk.virtualWrite(V1, voltage);
  Blynk.virtualWrite(V2, current);
  Blynk.virtualWrite(V3, power);
  Blynk.virtualWrite(V4, energy);

  // Run Blynk
  Blynk.run();

  delay(5000); // Adjust loop speed
}
