int readValue = 0;
float voltage = 0;
String output = " V";

void setup() {
  Serial.begin(9600);
}

void loop() {
  readValue = analogRead(A5);
  voltage = readValue * (5.0/1024.0);
  output = voltage + output;
  Serial.println(output);
  output = " V";
  delay(200);
}
