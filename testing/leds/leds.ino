int LED_OK = 2;
int LED_WATER_LOW = 3;
int LED_DRY = 4;
int LED_OVERSPILL = 12;

void setup() {
  pinMode(LED_OK, OUTPUT);
  pinMode(LED_WATER_LOW, OUTPUT);
  pinMode(LED_DRY, OUTPUT);
  pinMode(LED_OVERSPILL, OUTPUT);
}

void loop() {
  digitalWrite(LED_OK, LOW);
  digitalWrite(LED_WATER_LOW, LOW);
  digitalWrite(LED_DRY, LOW);
  digitalWrite(LED_OVERSPILL, HIGH);
  delay(1000);
  digitalWrite(LED_OK, HIGH);
  digitalWrite(LED_WATER_LOW, HIGH);
  digitalWrite(LED_DRY, HIGH);
  digitalWrite(LED_OVERSPILL, LOW);
  delay(1000);
}
