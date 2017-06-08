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

*Update*: Got the arduino to work properly and make the servo react to light.
```c++
#include <Servo.h>

int sensorPin1 = A2;    
int sensorPin2 = A3;   
int sensorValue1 = 0;  
int sensorValue2 = 0;  

Servo myservo; 

void setup() {
  myservo.attach(9); 
  Serial.begin(9600); 
}

void loop() {
  sensorValue1 = analogRead(sensorPin1); 
  sensorValue2 = analogRead(sensorPin2); 

  printSensorValues();

  if (sensorValue1 > sensorValue2) {
    myservo.write(150);
    delay(1500);
  } else {
    myservo.write(0);
    delay(1500);
  } 
  
void printSensorValues() {

  // print "Sensor 1:(sensorValue1)"
  Serial.print("Sensor 1: ");
  Serial.print(sensorValue1);

  // print "Sensor 2:(sensorValue2)"
  Serial.print(" Sensor 2: ");
  Serial.print(sensorValue2);

  // print space to start new line on serial monitor
  Serial.println();
}

}
```
