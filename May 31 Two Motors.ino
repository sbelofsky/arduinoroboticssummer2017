//based on the code of Mert Arduino and Tech

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
  Serial.print(leftForward);
  
  digitalWrite(leftForward , HIGH);   //move forward
  digitalWrite(leftBackward , LOW);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);
  delay(1000);
  digitalWrite(leftForward , LOW);    //turn right
  digitalWrite(leftBackward , HIGH);
  digitalWrite(rightForward , HIGH);
  digitalWrite(rightBackward , LOW);
  delay(200);
  
  //car moves in a large circle in a clockwise direction
}

