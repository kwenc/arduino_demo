int readValue = 0;
int threshold = 0;

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  readValue = analogRead(A5);
  threshold = analogRead(A4);

  if(readValue < threshold)
  {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8 ,LOW);
  }
  delay(50);
}
