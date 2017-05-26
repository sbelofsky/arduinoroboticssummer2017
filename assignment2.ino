//AnalogInput assignment 
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
 Serial.begin (9600);
}

void loop() {
  // read the value from the sensor:
   Serial.println (sensorPin); 
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}






//Turning on the LED when its bright
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
 Serial.begin (9600);
}

void loop() {
  // read the value from the sensor:
   Serial.println (sensorValue); 
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  if (sensorValue <= 920)
  
  digitalWrite(ledPin, LOW);
  if (sensorValue <= 620)

  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}

//turning on the LED when its dark
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
 Serial.begin (9600);
}

void loop() {
  // read the value from the sensor:
   Serial.println (sensorValue); 
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  if (sensorValue <= 840)
  
  digitalWrite(ledPin, LOW);
  if (sensorValue >= 920)

  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
