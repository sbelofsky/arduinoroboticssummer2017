

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
  // Drive each servo one at a time
 // Serial.println(servonum);
 
  pwm.setPWM(2, 0, 225);
  pwm.setPWM(3, 0, 300);
  pwm.setPWM(4, 0, 400);
  pwm.setPWM(5, 0, 225);
  pwm.setPWM(6, 0, 300);
  pwm.setPWM(7, 0, 400); 
  pwm.setPWM(8, 0, 225);
  pwm.setPWM(9, 0, 300);
  pwm.setPWM(10, 0, 400); 
  pwm.setPWM(11, 0, 225);
  pwm.setPWM(12, 0, 300);
  pwm.setPWM(13, 0, 400);   
  
  

}
