


void servosetup()
{
  servo1.attach(servo1pin);

  servo2.attach(servo2pin);
  
  servo3.attach(servo3pin);
  
  servo4.attach(servo4pin);
  
  servo5.attach(servo5pin);

}


void switchsetup()
{
  pinMode(btnpin, INPUT);

}


void potentiometersetup()
{
  pinMode(potpin, INPUT);
  
}