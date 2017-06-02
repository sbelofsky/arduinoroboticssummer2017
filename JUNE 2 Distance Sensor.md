###### JUNE 2 2017 ASSIGNMENT
___
**Obstacle Avoiding Robot**

```c++
//based on the code of Mert Arduino and Tech and Arduinobasics.blogspot.com

const int leftForward = 2;
const int leftBackward = 3;
const int rightForward = 4;
const int rightBackward = 5;

int vcc = 8; 
int trig = 9; 
int echo = 10; 
int gnd = 11; 

long duration, distance; // Duration used to calculate distance

void setup() {
  pinMode(leftForward , OUTPUT);
  pinMode(leftBackward , OUTPUT);
  pinMode(rightForward , OUTPUT);
  pinMode(rightBackward , OUTPUT);

  pinMode (vcc,OUTPUT);
  pinMode (gnd,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(vcc, HIGH);
  long duration, cm;

 pinMode(trig, OUTPUT);
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(5);
digitalWrite(trig, LOW);
pinMode(echo,INPUT);

duration = pulseIn(echo, HIGH); 
distance = (duration/2) / 28.5 ; //declares what the distance is
 if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  } else {
  Serial.println(distance); //prints distance in cm
  }

  if ( distance > 20 ) {
    //if distance is more than 20cm, arduino move forward
    digitalWrite(leftForward , HIGH);
    digitalWrite(leftBackward , LOW);
    digitalWrite(rightForward , HIGH);
    digitalWrite(rightBackward , LOW);
    delay(100);
  }
  else 
  //if there is an obstacle, Arduino turns until distance is <20
  {
    digitalWrite(leftForward , LOW);
    digitalWrite(leftBackward , HIGH);
    digitalWrite(rightForward , HIGH);
    digitalWrite(rightBackward , LOW);
    delay(500); //turns long enough to avoid most objects
  }
}


```

