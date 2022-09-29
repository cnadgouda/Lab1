/*
Light on an LED by pressing on a touch module
*/
const int pinLed = 2; // define pin 2 as a variable "pinLed"
const int pinTouch = 3; // define pin 2 as a variable "pinTouch"

void setup () 
{
  pinMode(pinTouch, INPUT); // define touch module as input (connected to D3)
  pinMode(pinLed, OUTPUT); // define touch module as input (connected to D2)

}

void loop ()
{
  if (digitalRead(pinTouch)) { // if touch module is pressed
  digitalWrite(pinLed, HIGH); // LED is on
  } else {
    digitalWrite(pinLed, LOW); // LED is off
  }
  delay(10);
}