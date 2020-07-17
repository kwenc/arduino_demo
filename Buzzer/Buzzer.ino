#define trigPin 12
#define echoPin 11

int counter = 0;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  range(10, 65);
  delay(50);
}

int distanceMeasure()
{
  long pulseTime, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pulseTime = pulseIn(echoPin, HIGH);
  distance = pulseTime / 58;

  return distance;
}

void range(int a, int b)
{
  int howFar = distanceMeasure();
  if((howFar > a) && (howFar < b))
  {
    digitalWrite(3, HIGH);
    delay(500);
  } else {
    digitalWrite(3, LOW);
  }
}
