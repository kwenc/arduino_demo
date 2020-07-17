int buttonCount;
int potencjometr;
int fotorezystor;

void setup() {
  Serial.begin(9600);

  pinMode(10, INPUT_PULLUP);
  buttonCount = 0;
}

void loop() {
  if(digitalRead(10) == LOW)
  {
    potencjometr = analogRead(A5);
    fotorezystor = analogRead(A3);
    buttonCount++;
    
    Serial.print("Fotorezystor: ");
    Serial.print(fotorezystor);
    Serial.print(",potencjometr: ");
    Serial.print(potencjometr);
    Serial.print(", przycisk wciśnięto ");
    Serial.print(buttonCount);
    Serial.print(" razy\n");
  }
  delay(200);
}
