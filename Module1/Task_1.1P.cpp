int LED_PIN = 9;
int PIR_SENSOR_PIN = 8;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIR_SENSOR_PIN, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int pirSensorReading = digitalRead(PIR_SENSOR_PIN);
  
  Serial.print("sensor: ");
  Serial.println(pirSensorReading);
  
  if (pirSensorReading == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("turn on light bulb");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("turn off light bulb");
  }
  
  delay(1000);
}
