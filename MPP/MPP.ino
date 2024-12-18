
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
  switchsetup();
 
}


void loop()
{
  Serial.println(analogRead(A3));
  int val1 = analogRead(potpin);
  val1 = map(val1, 0, 1023, 0, 180);


  int val4 = analogRead(potpin);
  val4 = map(val4, 0, 1023, 1023, 0);

  val4 = map(val4, 1023, 0, 180, 0);


  Serial.println(digitalRead(btnpin));
  int val2 = digitalRead(btnpin);

  int servo1val = (val1 + 40);

  int servo2val = (val1 - 20);

  int servo3val = (val4 - 20);

  int servo5val = (val4);
  

  

  if (val2 == 0)
  {
  servo1.write (servo1val);
  
  servo2.write (servo2val);

  servo3.write (servo3val);
  
  servo5.write (servo5val - 10);
  


  /*
  servo4.write (val1);
  */
  }

 
}


