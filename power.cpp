#include "power.h"

Power::Power()
{
	isCharged = charged;
	outputEast = true;
	outputNorth = true;
	outputSouth = true;
	outputWest = true;
	ID = "POWER";
}

Power::~Power()
{
}