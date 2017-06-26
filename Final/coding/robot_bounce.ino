

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
int pos = 0;

// called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
// you can also call it with a different address you want
//Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);

// Depending on your servo make, the pulse width min and max may vary, you 
// want these to be as small/large as possible without hitting the hard stop
// for max range. You'll have to tweak them as necessary to match the servos you
// have!
#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // this is the 'maximum' pulse length count (out of 4096)

// our servo # counter
uint8_t servonum = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("16 channel Servo test!");

  pwm.begin();
  
  pwm.setPWMFreq(60);  // Analog servos run at ~60 Hz updates
}

// you can use this function if you'd like to set the pulse length in seconds
// e.g. setServoPulse(0, 0.001) is a ~1 millisecond pulse width. its not precise!
void setServoPulse(uint8_t n, double pulse) {
  double pulselength;
  
  pulselength = 1000000;   // 1,000,000 us per second
  pulselength /= 60;   // 60 Hz
  Serial.print(pulselength); Serial.println(" us per period"); 
  pulselength /= 4096;  // 12 bits of resolution
  Serial.print(pulselength); Serial.println(" us per bit"); 
  pulse *= 1000;
  pulse /= pulselength;
  Serial.println(pulse);
  pwm.setPWM(n, 0, pulse);
}


void loop() {
  // pins 2 to 13 control servos
  //FR=2,3,4 FL=5,6,7 BR=8,9,10 BL=11,12,13

//middle joints
  for (pos = 250; pos <= 300; pos += 1) {            
    pwm.setPWM(3, 0, pos);              
    pwm.setPWM(6, 0, pos);          
    pwm.setPWM(9, 0, pos);            
    pwm.setPWM(12, 0, pos);
    delay(5);                                  
  }
  for (pos = 300; pos >= 250; pos -= 1) { 
    pwm.setPWM(3, 0, pos);              
    pwm.setPWM(6, 0, pos);          
    pwm.setPWM(9, 0, pos);            
    pwm.setPWM(12, 0, pos);
    delay(5);                                    
  }

}

