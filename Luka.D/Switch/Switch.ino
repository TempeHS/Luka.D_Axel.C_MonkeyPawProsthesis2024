
static unsigned int btnPin = 7;
static unsigned int LEDpin = 8;



void setup ()
{
  Serial.begin(9600);
  Serial.println("debug");
  pinMode(LEDpin, OUTPUT);
  pinMode(btnPin, INPUT);
}



void loop()

{
  LEDpin = digitalRead(btnPin);
}