/*
    Project name : ESP32 Flame Sensor
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-flame-sensor
*/

const int flameSensorPin = 15; // Digital pin connected to the flame sensor

void setup() {
  Serial.begin(115200); // Initialize serial communication
  pinMode(flameSensorPin, INPUT); // Set the flame sensor pin as INPUT
}

void loop() {
  // Read the state of the flame sensor
  int flameState = digitalRead(flameSensorPin);

  // Print the state to the Serial Monitor
  if (flameState == HIGH) {
    Serial.println("No flame detected");
  } else {
    Serial.println("Flame detected!");
  }

  delay(500); // Add a small delay to avoid spamming the Serial Monitor
}
