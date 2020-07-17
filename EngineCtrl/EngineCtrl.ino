void setup() {
  pinMode(6, OUTPUT);
  digitalWrite(6, HIGH);

  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  for(int i = 0; i <= 255; i++)
  {
    analogWrite(6, i);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(10);
  }
  for(int i = 255; i > 0; i--)
  {
    analogWrite(6, i);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(10);
  }
  analogWrite(6, 255);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(3000);

}
