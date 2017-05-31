###### MAY 31 2017
___

**Two Motors Assignment**

![My Arduino Vehicle](https://github.com/sbelofsky/arduinoroboticssummer2017/blob/master/2017-05-31%2015.59.39.jpg?raw=true =250x250)

```c++
//based on the video by Mert Arduino and Tech

const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;

void setup() 
{
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);
}

void loop()
{
//Directions to make the vehicle go in a large circle
  digitalWrite(leftForward , HIGH);   //move forward for one second
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);
  delay(1000);
  digitalWrite(leftForward , LOW);    //turn right for half a second
  digitalWrite(leftBackward , HIGH);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);
  delay(200);
}
```
