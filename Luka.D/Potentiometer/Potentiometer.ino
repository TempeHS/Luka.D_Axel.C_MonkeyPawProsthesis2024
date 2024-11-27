/*
  Purpose: Basic example of the Seead Rotary Potentiometer input sensor
  Notes: Below the main code is a more advanced example that uses voltage input to measure the ange of motion
  Author: Ben Jones 13/7/23
  Contact: benjmain.jones21@det.nsw.edu.au
  Source: https://wiki.seeedstudio.com/Grove-Rotary_Angle_Sensor/
*/

static unsigned int potPIN = A3;
static unsigned int LEDpin = 3;


void setup()
{
    Serial.begin(9600);
    pinMode(LEDpin, OUTPUT);
}

void loop()
{   
  Serial.println(analogRead(A3));
  int val = analogRead(A3);
  val = map(val, 0, 1023, 0, 255);
  analogWrite (LEDpin, val);

}




/*
//macro definitions of Rotary angle sensor and LED pin
#define ROTARY_ANGLE_SENSOR A0
#define LED 3  //the Grove - LED is connected to PWM pin D3 of Arduino
#define ADC_REF 5 //reference voltage of ADC is 5v.If the Vcc switch on the seeeduino
#define GROVE_VCC 5 //VCC of the grove interface is normally 5v
#define FULL_ANGLE 300 //full value of the rotary angle is 300 degrees

void setup()
{
    Serial.begin(9600);
    pinMode(ROTARY_ANGLE_SENSOR, INPUT); //Potentiometer is the input
    pinMode(LED,OUTPUT); //LED is the output
}

void loop()
{   
    float voltage; //Voltage is held as float data
    int sensor_value = analogRead(ROTARY_ANGLE_SENSOR); //the integer sensor_value is equal to the potentiometer
    voltage = (float)sensor_value*ADC_REF/1023; //Telling the arduino to give the LED voltage equal to its reference voltage of 5 times the value of the potentiometer
    float degrees = (voltage*FULL_ANGLE)/GROVE_VCC; // The angle of the potentiometer is equal to (the voltage times the full 300 degrees) divided by the value of the voltage common collector
    Serial.println("The angle between the mark and the starting position:"); // Tells the serial monitor to print "The angle between the mark and the starting position" of the potentiometer
    Serial.println(degrees); //Tells the serial monitor to print the value of the angle on the next line

    int brightness; //Read LED brightness as an integer
    brightness = map(degrees, 0, FULL_ANGLE, 0, 255); //LED brightness is equal to 
    analogWrite(LED,brightness);
    delay(500);
}
*/