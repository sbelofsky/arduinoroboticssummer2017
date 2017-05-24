# arduinoroboticssummer2017

//two leds blinking at once

int led = 9;
int led2 = 8;

void setup() {               
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on 
  delay(100);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off
  delay(100); 
  {digitalWrite(led2, HIGH);
delay(100);
digitalWrite(led2, LOW);
delay(100);}

}
