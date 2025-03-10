

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

void setup()
{
  Serial.begin(9600);
  Serial.print("Debug");

  servo1.attach(servo1pin);

  servo2.attach(servo2pin);
  
  servo3.attach(servo3pin);
  
  servo4.attach(servo4pin);
  
  servo5.attach(servo5pin);
}

void loop()
{
  /*
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);

  delay(2000);

*/



  servo1.write(170);
  servo2.write(160);
  servo3.write(90);
  servo4.write(166);
  servo5.write(35);

  delay(2000);

}