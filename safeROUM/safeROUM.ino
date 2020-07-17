#include "defines.h"

void setup() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);

  pinMode(KONTRAKTRON, INPUT_PULLUP);
  pinMode(PIR, INPUT);
  pinMode(BUZZER, OUTPUT);

  digitalWrite(LED_R, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);
}

void loop() {
  if(digitalRead(PIR) == LOW)
  {
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, HIGH);
  } else {
    digitalWrite(LED_R, HIGH);
    digitalWrite(LED_G, LOW);
    //tone(BUZZER, 4300, 150);
    //tone(BUZZER, 3500, 150);
  }
}
