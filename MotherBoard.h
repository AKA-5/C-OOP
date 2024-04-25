#pragma once
#include"MainMemory.h"
#include"Port.h"
class MotherBoard
{
	MainMemory *mm;
	Port ports[8];
public:
	MotherBoard();
	MotherBoard(MainMemory*);
	MainMemory *get_mm();
	void set_mm(MainMemory*);
	Port get_ports(int);
	void set_ports();
	~MotherBoard();
};

