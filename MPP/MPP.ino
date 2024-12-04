
#include <Servo.h>


Servo servo1;
static unsigned int servo1pin = 2;

Servo servo2;
static unsigned int servo2pin = 3;

Servo servo3;
static unsigned int servo3pin = 4;

Servo servo4;
static unsigned int servo4pin = 5;

Servo servo5;
static unsigned int servo5pin = 6;



static unsigned int potpin = A3;

static unsigned int btnpin = 7;

void setup()
{
  Serial.begin(9600);
  Serial.print("Debug");
  servosetup();
  potentiometersetup();
   pinMode(LEDpin, OUTPUT);
  switchsetup();
}


void loop()
{
  Serial.println(analogRead(A3));
  int val = analogRead(A3);
  val = map(val, 0, 1023, 0, 255);
  analogWrite (LEDpin, val);
}