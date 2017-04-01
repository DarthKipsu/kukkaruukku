int LED_DRY = 2;
int LED_WET = 3;
int LED_MOIST = 4;
int LED_OVERSPILL = 12;

int MOISTURE_SENSOR = A0;
int WATER_SENSOR = 10;

void setup() {
  pinMode(LED_WET, OUTPUT);
  pinMode(LED_MOIST, OUTPUT);
  pinMode(LED_DRY, OUTPUT);
  pinMode(LED_OVERSPILL, OUTPUT);
  pinMode(MOISTURE_SENSOR, INPUT);
  pinMode(WATER_SENSOR, INPUT);
}

void loop() {
  if (digitalRead(WATER_SENSOR) == LOW) {
    showWaterSpillage();
  } else {
    showSoilMoistureLevel();
  }
}

void showWaterSpillage() {
  digitalWrite(LED_OVERSPILL, HIGH);
  delay(250);
  digitalWrite(LED_OVERSPILL, LOW);
  delay(250);
}

void showSoilMoistureLevel() {
  int moisture = analogRead(MOISTURE_SENSOR);
  if (moisture < 50) {
    digitalWrite(LED_DRY, HIGH);
  } else if (moisture < 600) {
    digitalWrite(LED_MOIST, HIGH);
  } else {
    digitalWrite(LED_WET, HIGH);
  }
  delay(250);
  digitalWrite(LED_WET, LOW);
  digitalWrite(LED_MOIST, LOW);
  digitalWrite(LED_DRY, LOW);
}

