// Arduino ThermoRange
// Sensors: LM35 + HC-SR04
// Output: Serial Monitor

const int temperaturePin = A0;
const int trigPin = 9;
const int echoPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(temperaturePin);

  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = voltage * 100.0;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long echoTime = pulseIn(echoPin, HIGH);

  float speed = 331.3 + (0.606 * temperatureC);
  float distance = (echoTime * speed * 0.0001) / 2;

  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(1000);
}