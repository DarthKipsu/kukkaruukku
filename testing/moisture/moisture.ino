int MOISTURE_SENSOR = A0;

void setup() {
  Serial.begin(9600);
  pinMode(MOISTURE_SENSOR, INPUT);
}

void loop() {
  int moisture = analogRead(MOISTURE_SENSOR);
  Serial.print("Moisture: ");
  Serial.print(moisture);
  if (moisture < 50) {
    Serial.println(". Dry soil!");
  } else if (moisture < 600) {
    Serial.println(". Humid soil");
  } else {
    Serial.println(". Wet soil!");
  }
  delay(500);
}
