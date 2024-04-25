#include "ControlUnit.h"

ControlUnit::ControlUnit()
{
	clock = 0.0;
}
ControlUnit::ControlUnit(float clock)
{
	this->clock = clock;

}
float ControlUnit::get_clock()
{
	return this->clock;
}

void ControlUnit::set_clock(float clock)
{
	this->clock = clock;
}