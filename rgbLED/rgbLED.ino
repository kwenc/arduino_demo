#define red 3
#define green 5
#define blue 6

#define red2 9
#define green2 10
#define blue2 11

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(blue2, OUTPUT);

  randomSeed(analogRead(A5));
}

void loop() {
  int change = 0;
  int randomChange = random(255);

  for(change = 0; change < 255; change++)
  {
    analogWrite(red, randomChange);
    analogWrite(green, change);
    analogWrite(blue, 255 - change);

    analogWrite(red2, change);
    analogWrite(green2, 255 - change);
    analogWrite(blue2, randomChange);

    delay(10);
  }
  for(change = 255; change > 0; change--)
  {
    analogWrite(red, randomChange);
    analogWrite(green, change);
    analogWrite(blue, 255 - change);

    analogWrite(red2, change);
    analogWrite(green2, 255 - change);
    analogWrite(blue2, randomChange);

    delay(10);
  }
}
