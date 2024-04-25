#pragma once
#include"PhysicalMemory.h"
#include"CPU.h"
#include"MotherBoard.h"
#include"ComputerAssembly.h"

class Computer:public ComputerAssembly
{
	PhysicalMemory *pm;
	MotherBoard *mb;
	CPU *cpu;
public:
	Computer();
	Computer(PhysicalMemory*, MotherBoard*, CPU*);
	PhysicalMemory &get_pm();
	void set_pm(PhysicalMemory*);
	MotherBoard &get_mb();
	void set_mb(MotherBoard*);
	CPU &get_cpu();
	void set_cpu(CPU*);
	~Computer();
};

