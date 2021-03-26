const int myLED[] = {3, 5, 2, 4, 6, 8, 10, 12};

void setup() {
  for (int i = 0; i < 8; i++)
    pinMode(myLED[i], OUTPUT);
}

void loop() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 8; j++)
      digitalWrite(myLED[j], HIGH);
    delay(100);
    for (int j = 0; j < 8; j++)
      digitalWrite(myLED[j], LOW);
    delay(100);
  }
  delay(300);

  for (int i = 0; i < 8; i++) {
    digitalWrite(myLED[i], HIGH);
    delay(100);
  }
  for (int i = 0; i < 8; i++)
    digitalWrite(myLED[i], LOW);
  delay(200);
  for (int i = 7; i >= 0; i--) {
    digitalWrite(myLED[i], HIGH);
    delay(100);
  }
  for (int i = 0; i < 8; i++)
    digitalWrite(myLED[i], LOW);
  delay(300);

  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 8; i += 2)
      digitalWrite(myLED[i], HIGH);
    delay(200);
    for (int i = 0; i < 8; i += 2)
      digitalWrite(myLED[i], LOW);
    for (int i = 1; i < 8; i += 2)
      digitalWrite(myLED[i], HIGH);
    delay(200);
    for (int i = 1; i < 8; i += 2)
      digitalWrite(myLED[i], LOW);
  }
}
