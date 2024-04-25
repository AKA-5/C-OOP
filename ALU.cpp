#include "ALU.h"
ALU::ALU()
{
	NoOfAdders = 0;
	NoOfSubtractors = 0;
	NoOfRegisters = 0;
	sizeOfRegisters = 0;

}
ALU::ALU(int NoOfAdders, int NoOfSubtractors, int NoOfRegisters, int sizeOfRegisters)
{
	this->NoOfAdders = NoOfAdders;
	this->NoOfSubtractors = NoOfSubtractors;
	this->NoOfRegisters = NoOfRegisters;
	this->sizeOfRegisters = sizeOfRegisters; // It can be 64 or 86 bit processor
}

int ALU::get_NoOfAdders()
{
	return this->NoOfAdders;
}

void ALU::set_NoOfAdders(int NoOfAdders)
{
	this->NoOfAdders = NoOfAdders;
}
int ALU::get_NoOfSubtractors()
{
	return this->NoOfSubtractors;
}
void ALU::set_NoOfSubtractors(int NoOfSubtractors)
{
	this->NoOfSubtractors = NoOfSubtractors;
}
int ALU::get_NoOfRegisters()
{
	return this->NoOfRegisters;
}
void ALU::set_NoOfRegisters(int NoOfRegisters)
{
	this->NoOfRegisters = NoOfRegisters;
}
int ALU::get_sizeOfRegisters()
{
	return this->sizeOfRegisters;
}

void ALU::set_sizeOfRegisters(int sizeOfRegisters)
{
	this->sizeOfRegisters = sizeOfRegisters;
}