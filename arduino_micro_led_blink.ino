
int LED_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  blinkLed(LED_PIN, random(100, 1000));
}

void blinkLed(int led_pin, int sec) {
  digitalWrite(led_pin, HIGH);
  delay(sec);
  digitalWrite(led_pin, LOW);
  delay(sec);
}
