#include <LDR_Sensor.h> // Import the Library

LDR_Sensor mySensor(A0); // Replace with the pin

void setup() {
  mySensor.begin(); // Start the Sensor
  Serial.begin(115200); // Start the Serial Console
}

void loop() {
  int sensorValue = mySensor.read(); // Read the value from the sensor
  Serial.println(sensorValue); // Print the Value
}