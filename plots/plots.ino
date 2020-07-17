#define trigPin 12
#define echoPin 11

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  Serial.print(random(300));
  Serial.print("\t");
  Serial.print(random(300, 400));
  Serial.print("\t");
  Serial.print(random(410, 420));
  Serial.println();
  delay(200);
}
