#include "Port.h"
Port::Port()
{
	type = "";
	baud_rate = 0;
}
Port::Port(string type, int baud_rate)
{
	this->type = type;
	this->baud_rate = baud_rate;
}
string Port::get_type()
{
	return this->type;
}
void Port::set_type(string type)
{
	this->type = type;
}
int Port::get_baud_rate()
{
	return this->baud_rate;
}
void Port::set_baud_rate(int baud_rate)
{
	this->baud_rate = baud_rate;
}