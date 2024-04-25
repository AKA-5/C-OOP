#include "MotherBoard.h"


MotherBoard::MotherBoard()
{
	mm = new MainMemory;
	// default constructor of part classes will be called automatically when the object is created
}
MotherBoard::MotherBoard(MainMemory *mm )
{
	this->mm = mm;
	
}
MainMemory *MotherBoard::get_mm()
{
	return this->mm;
}
void MotherBoard::set_mm(MainMemory *mm)
{
	this->mm = mm;
}
Port MotherBoard::get_ports(int n)
{
	return this->ports[n];
}
// I will be setting manually all the general ports required
void MotherBoard::set_ports()
{
	int i = 0;
	ports[i].set_baud_rate(3) ;    // 3 Gbps (HDMI rate depends on TMDS)
	ports[i].set_type("HDMI");
	++i;
	ports[i].set_baud_rate(115);	// 115 MHz rate
	ports[i].set_type("VGA");
	++i;
	ports[i].set_baud_rate(12);    //12 Mbps
	ports[i].set_type("USB");
	++i;
	ports[i].set_baud_rate(12);   //12 Mbps
	ports[i].set_type("USB");
	++i;
	ports[i].set_baud_rate(100);	// 100 Mbps
	ports[i].set_type("Ethernet");
	++i;
	ports[i].set_baud_rate(1);		// 1 Mbps
	ports[i].set_type("Audio");
	++i;
	ports[i].set_baud_rate(50);		//50 MHz (standard speed)
	ports[i].set_type("SD Card");
	++i;
	ports[i].set_baud_rate(0);		// depends on micro-controller clock frequency
	ports[i].set_type("I/O Port");
	
	
}

MotherBoard::~MotherBoard()
{
	delete this->mm;
}