String receivedData = "";

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0)
  {
    receivedData = Serial.readStringUntil('\n');
    Serial.println("Witaj " + receivedData + ", mój stworzycielu");
  }
}
