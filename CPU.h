#pragma once
#include"ALU.h"
#include"ControlUnit.h"

class CPU
{

	ALU alu;
	ControlUnit cu;
public:
		CPU();
		CPU(ALU, ControlUnit);
		ALU get_alu();
		void set_alu(ALU);
		ControlUnit get_cu();
		void set_cu(ControlUnit);
};

