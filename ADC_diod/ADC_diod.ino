#define diod 2
int readValue = 0;

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  readValue = analogRead(A5);
  digitalWrite(diod, HIGH);
  delay(readValue);
  digitalWrite(diod, LOW);
  delay(readValue);
}
