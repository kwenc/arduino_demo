#include <Servo.h>

Servo servoMechanism;
int pos = 0; // Servo position 0-180
int change = 6;

void setup() {
  servoMechanism.attach(9);
}

void loop() {
  if(pos < 180)
  {
    servoMechanism.write(pos);
  } else {
    pos = 0;
  }

  pos += change;
  delay(100);
}
