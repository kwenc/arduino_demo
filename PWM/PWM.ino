#define diodPIN 3

int fill = 0;
int change = 5;
 
 void setup() {
  pinMode(diodPIN, OUTPUT);
}

void loop() {
  analogWrite(diodPIN, fill);

  while(fill < 255)
  {
    fill += change;
    analogWrite(diodPIN, fill);
    delay(50);
  }
  while(fill > 0)
  {
    fill -= change;
    analogWrite(diodPIN, fill);
    delay(50);
  }
}
