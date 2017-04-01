int WATER_SENSOR = 10;

void setup() {
  Serial.begin(9600);
  pinMode(WATER_SENSOR, INPUT);
}

void loop() {
  int water = digitalRead(WATER_SENSOR);
  if (water == LOW) {
    Serial.println(" Water spillage!");
  }
  delay(500);
}
