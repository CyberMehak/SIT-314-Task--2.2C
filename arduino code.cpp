
const int soilMoisturePin = A0;  // Analog input pin for the soil moisture sensor

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging
}

void loop() {
  int soilMoistureValue = analogRead(soilMoisturePin);  // Read the analog value from the sensor
  int moisturePercentage = map(soilMoistureValue, 0, 1023, 0, 100);  // Map the value to percentage (0-100%)

  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  delay(1000);  // Add a small delay to avoid spamming the serial monitor
}
