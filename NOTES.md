###### MAY 31 2017 
___
**While Loop** 
```c++
while (sensorValue >=400) {
 digitalWrite)ledPin, HIGH);
 sensorValue = analogRead(sensorPin);
```

**For Loop**
<p>Variant of the While Loop</p>

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
<p>VCC to 5v
<p>GND to GND
<p>ECHO to pin x
<p>TRIG to pin x

<p>Echo: Listens, Trig: Trigger

