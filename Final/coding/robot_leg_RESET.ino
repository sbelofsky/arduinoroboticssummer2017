

#include <Servo.h>

Servo aServo;  
Servo bServo;
Servo cServo;

int pos = 0;    // variable to store the servo position

void setup() {
  aServo.attach(12);  
  bServo.attach(11);
  bServo.attach(10);
}

void loop() {
  aServo.write(90);
  bServo.write(90);
  cServo.write(90);

}

