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

