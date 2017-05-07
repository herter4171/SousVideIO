#include "readRF.h"
#define readPin 0 // digital pin 2

// Note: use pulse length of 232
readRF::readRF()
{
	Serial.begin(115200);
	mySwitch = RCSwitch();
	mySwitch.enableReceive(readPin);
}

readRF::~readRF()
{

}

char readRF::readChar()
{
	return listen<char>();
}

template <typename T>
T readRF::listen()
{
	unsigned long value = 0;
	if (mySwitch.available()) 
	{
		unsigned long value = mySwitch.getReceivedValue();

		if ((int) value == 0) 
		{
			Serial.print("Unknown encoding");
		}
		else 
		{
			Serial.print("Received: ");
			Serial.print((char)value);
			Serial.print(" ");
			Serial.print(value);
			Serial.print("\n");
		}

		mySwitch.resetAvailable();

	}

	return (T)value;
}