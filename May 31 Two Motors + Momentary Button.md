###### MAY 31 2017
___

**Two Motors Assignment**
<p>Picture of my Arduino Vehicle: https://github.com/sbelofsky/arduinoroboticssummer2017/blob/master/2017-05-31%2015.59.39.jpg?raw=true</p>

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
___

**Vehicle with Momentary Switch**
<p> Video: https://drive.google.com/open?id=0ByoG_GCyf9IYR2RtTjVQR3BnQzg </p>

```c++
const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;
const int pushButton = 6;

void setup() 
{
 Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);
}
void loop()
{
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        
  if (buttonState == HIGH) {
  digitalWrite(leftForward , HIGH);   //Move forward when button is pressed
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);
  }
  else {
  digitalWrite(leftForward , LOW);   //Turn off when button is not pushed
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , LOW);
  digitalWrite(rightBackward , LOW);
  }
}
```

___

**Modified Momentary Switch**
<p>When button is pressed one, action is played indefinetely. This happens because I removed the "if" code section and therefore the program doesn't know when to stop.</p>

```c++
const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;
const int pushButton = 6;

void setup() 
{
 Serial.begin(9600);
  pinMode(pushButton, INPUT);
  
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);
}
void loop()
{
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        
  if (buttonState == HIGH) {
  digitalWrite(leftForward , HIGH);   //Move forward when button is pressed
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);
//"if" was removed to allow the button to be able to be pressed once instead of being held down
  }
}
