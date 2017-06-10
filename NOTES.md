___
###### MAY 31 2017 
___
**While Loop** 
```c++
while (sensorValue >=400) {
 digitalWrite)ledPin, HIGH);
 sensorValue = analogRead(sensorPin);
```

**For Loop**
<br>Variant of the While Loop</br>

```c++
for(int count=0; count <7; count=count+1){
//etc HIGH, DELAY, LOW, DELAY
}
```
`(int count=0;` Initialization, once in the begining

`count <7;` Condition, Keep on going as long as it's true

`count=count+1)` Apply change after every loop

___
###### JUNE 2 2017 
___
**Distance Sensor**
<br>Example code: http://www.instructables.com/id/Simple-Arduino-and-HC-SR04-Example/</br>
```
VCC to 5v
GND to GND
ECHO to pin x
TRIG to pin x
```
<p>-Echo: Listens, Trig: Trigger
<br>-Uses Microseconds rather than milliseconds
<br>-LONG is a type of integer. Only uses whole numbers</br>

`Serial.PrintIn(sensorValue)` - Label

`Serial.Print(distance)` - Uses the numbers calculated earlier in the code

`Serial.PrintIn(" cm")` - adds a label to the value, but not necessary
<br>-PINS 0 and 1 are for USB communication. 
<br>-analogRead returns information (=) No void

**Servo Motors**
<br>Can be told exactly where to go in 180 degrees. Can be pointed in specific positions.
<br>Brown = GRND, Red = 5V, Orange = Signal
<br>   -Signal goes to an Arduino pin

<br>`#include <Servo.h>` Arduino Library, provided with program
<br>`Servo myservo;` Handle for the servo motor

___

###### JUNE 5 2017
___
**Shields**
<br>-Arduino Shields and diy: Souder your own circuits, more permanent and more reliable
<br>-Has cool options (Ex: wifi, bluetooth, etc...)
<br>-Sockets: holes Pins: inserted into sockets

**Light Seeking Robot**
```c++
int rightSensor = analogRead (rightSensorPin)
int left ... left
if (lightSensor > left Sensor) {
 turnRight();
 } else }
  turnLeft();
 }
```
___

###### JUNE 7 2017
___
**Print 2 readings**
<br>Serial Prints from 2 LDRs from Sergio Burgos' code:
```c++
void loop() {
  sensorValue1 = analogRead(sensorPin1); // update sensorValue1
  sensorValue2 = analogRead(sensorPin2); // update sensorValue2

  // print "Sensor 1:(sensorValue1)"
  Serial.print("Sensor 1: ");
  Serial.print(sensorValue1);

  // print "Sensor 2:(sensorValue2)"
  Serial.print(" Sensor 2: ");
  Serial.print(sensorValue2);

  // print space to start new line on serial monitor
  Serial.println();

  // creating condition for servo to turn left or right following light
  if (sensorValue1 > sensorValue2) {
    myservo.write(170);
    delay(1500);
  } else {
    myservo.write(0);
    delay(1500);
  }
```
**Absolute**
<br> Absolute: `abs` ignores negatives
___

###### JUNE 9 2017
___
**Arrays**
Ways of storing many numbers under one name. Must declare type (below)
```c++
int myInts[6];
  int myPins[] = {2, 4, 8, 3, 6};
  int mySensVals[6] = {2, 4, -8, 3, 2};
  char message[6] = "hello";
```
`long` = for larger bits (billions)
<br>`int` = shorter, uses less space (thousands)
<br>Both only uses whole numbers
<br>`float` = can use decimal points, uses more space
<br>`boolean` = Either 0 or 1, true or false, smallest storage

**Classes**
-Has functions, behaviours, and variables. Class is like a folder and Objects are like a file
<br>- `servo` is a class, `myservo` ia an object

