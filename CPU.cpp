#include "CPU.h"
CPU::CPU()
{
	// default constructor of part classes will be called automatically when the object is created
}

CPU::CPU( ALU alu,  ControlUnit cu) : alu(alu), cu(cu)
{

}
ALU CPU::get_alu()
{
	return this->alu;
}
void CPU::set_alu(ALU alu)
{
	this->alu = alu;
}
ControlUnit CPU::get_cu()
{
	return this->cu;
}
void CPU::set_cu(ControlUnit cu)
{
	this->cu = cu;
}
