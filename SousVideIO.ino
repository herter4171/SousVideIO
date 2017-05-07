/*
Name:		ArduinoIO.ino
Created:	5/6/2017 10:18:03 AM
Author:	jwhh9
*/
#include "readRF.h"
#include <stdlib.h>
#include <stdio.h>

readRF* rdRF;

void setup() 
{
	rdRF = new readRF();
}

void loop() {
	rdRF->readChar();
}