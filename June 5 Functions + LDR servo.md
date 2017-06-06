___
###### JUNE 5 Assignments 
___
**Functions for Arduino Vehicle**
```c++
void forward(); {
    digitalWrite(leftForward , HIGH);
    digitalWrite(leftBackward , LOW);
    digitalWrite(rightForward , HIGH);
    digitalWrite(rightBackward , LOW);
}

void backwards(); {
     digitalWrite(leftForward , LOW);
    digitalWrite(leftBackward , HIGH);
    digitalWrite(rightForward , LOW);
    digitalWrite(rightBackward , HIGH);
}

void right(); {
    digitalWrite(leftForward , LOW);
    digitalWrite(leftBackward , HIGH);
    digitalWrite(rightForward , HIGH);
    digitalWrite(rightBackward , LOW);
}

void left(); {
    digitalWrite(leftForward , HIGH);
    digitalWrite(leftBackward , LOW);
    digitalWrite(rightForward , LOW);
    digitalWrite(rightBackward , HIGH);
}
```
___
**Servo Motor Reacting to Light**

I couldn't get the servo to react properly with the two LDRs. When attempted, it would only react to one LDR and move irratically. Will try again soon to get it working.
