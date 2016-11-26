#include "Arduino.h"
//The setup function is called once at startup of the sketch

#define LED 13

void setup()
{

	pinMode(LED,OUTPUT);
	// Add your initialization code here
}

// The loop function is called in an endless loop
void loop()
{
	digitalWrite(LED,HIGH);
	delay(500);
	digitalWrite(LED,LOW);
	delay(500);
}
