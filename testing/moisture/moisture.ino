int MOISTURE_SENSOR = A0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
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
