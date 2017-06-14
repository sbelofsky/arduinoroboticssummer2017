#include <Servo.h>

Servo myservoa;  
Servo myservob;  
Servo myservoc; 

int pos = 0;    

void setup() {
  myservoa.attach(10);  
  myservob.attach(11); 
  myservoc.attach(12);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    // in steps of 1 degree
    myservoa.write(pos);              
    myservob.write(pos);  
    myservob.write(pos); 
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservoa.write(pos);              
    myservob.write(pos);              
    delay(15);                       
}

