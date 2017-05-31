//5-23-17 TWO LEDS BLINKING AT ONCE
int led = 9; int led2 = 8;

void setup() {

pinMode(led, OUTPUT); pinMode(led2, OUTPUT); }

void loop() { digitalWrite(led, HIGH); // turn the LED on 
delay(100); // wait for a second 
digitalWrite(led, LOW); // turn the LED off 
delay(100); {digitalWrite(led2, HIGH); delay(100); 
digitalWrite(led2, LOW); delay(100);}

}

//5-23-17 ANALOGINOUTSERIAL AND LEDS
 Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(analogOutPin, outputValue);

  // print the results to the serial monitor:
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);

  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(2);
}
