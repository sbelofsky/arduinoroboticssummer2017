___
###### JUNE 12 2017 
___
**Parts List**
<br>  -Servo motor x12
<br>  -Arduino Uno
<br>  -Breadboard

*Optional/other*
<br>  -Distance sensor
<br>  -Different materials for building
___

**Reference Tutorials**
<br>http://www.instructables.com/id/QUATTRO-the-Arduino-Quadruped-Robot/
<br>http://www.instructables.com/id/Arduino-Based-Four-Legged-Robot/
<br>http://forum.arduino.cc/index.php?topic=268990.0
___

**Prototype leg**
<br>Made a simple leg using recycled wood and hot glue. Managed to have all three servos moving at the same time using this code. However, I am still figuring out how to have it move properly like a leg.
```c++
#include <Servo.h>

Servo blueServo;  
Servo kneeServo;
Servo toeServo;

int pos = 0;    // variable to store the servo position

void setup() {
  blueServo.attach(12);  
  kneeServo.attach(11);
  toeServo.attach(10);
}

void loop() {
  blueServo.write(90);
  kneeServo.write(90);
  toeServo.write(90);

}
```

