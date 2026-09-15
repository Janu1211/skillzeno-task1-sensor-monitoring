int sensorPin = A0;
int sensorValue;
float voltage;
float temperature;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);

  voltage = sensorValue * 5.0 / 1023.0;

  temperature = (voltage - 0.5) * 100;

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  delay(1000);
}