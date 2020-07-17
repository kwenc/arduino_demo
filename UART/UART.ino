#define red  9
#define green 8
#define windowSensor 10
String alarm = "Alarm! Okno nie jest zamkniete";

void setup() {
  // Start of transmission
  Serial.begin(9600);

  // Set diods as outputs
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);

  // Set button as input
  pinMode(windowSensor, INPUT_PULLUP);
  
  // Diods turned off initially
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
}

void loop() 
{
  if(digitalRead(windowSensor) == LOW)
  {
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  } else {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
    Serial.println(alarm);

    while(digitalRead(windowSensor) == HIGH)
    {
      delay(25);
    }
  }
}
