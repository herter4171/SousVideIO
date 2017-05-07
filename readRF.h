#pragma once

#include <stdlib.h>
#include <stdio.h>
#include "RCSwitch.h"

class readRF
{
public:
	readRF();
	~readRF();
	char readChar();

private:
	template <typename T>
	T listen();

	RCSwitch mySwitch;
};
#pragma once