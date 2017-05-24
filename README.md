# arduinoroboticssummer2017

//5-23-17 Two leds blinking at once 

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

//5-23-17 Problems Encountered:
//when trying to use the LDR with the LED, various codes and configurations never seemed to work. My goal was to have the LED turn on when its dark and turn off in the presence of light. Despite my many tries, nothing seemed to work even when I copied other codes and variations from online tutorials exactly. This made me wonder wether it was my equipment at fault rather than the codes so I plan to try this again with a new LDR.
