int button = 7;
int greenDiod = 8;
int yellowDiod = 9;
int redDiod = 10;

void setup() {
  pinMode(greenDiod, OUTPUT);
  pinMode(yellowDiod, OUTPUT);
  pinMode(redDiod, OUTPUT);

  pinMode(button, INPUT_PULLUP);

  // Set all lights off
  digitalWrite(greenDiod, LOW);
  digitalWrite(yellowDiod, LOW);
  digitalWrite(redDiod, LOW);
}

void loop() 
{
  digitalWrite(greenDiod, HIGH);
  digitalWrite(yellowDiod, LOW);
  digitalWrite(redDiod, LOW);

  delay(1000);


  digitalWrite(greenDiod, LOW);
  digitalWrite(yellowDiod, HIGH);
  digitalWrite(redDiod, LOW);

  delay(1000);
  
  digitalWrite(greenDiod, LOW);
  digitalWrite(yellowDiod, LOW);
  digitalWrite(redDiod, HIGH);

  delay(1000);

  digitalWrite(greenDiod, LOW);
  digitalWrite(yellowDiod, HIGH);
  digitalWrite(redDiod, HIGH);

  delay(1000);
}
