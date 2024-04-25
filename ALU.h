#pragma once
class ALU
{
	int NoOfAdders;
	int NoOfSubtractors;
	int NoOfRegisters;
	int sizeOfRegisters;
public:
		ALU();
		ALU(int, int, int, int);
		int get_NoOfAdders();
		void set_NoOfAdders(int);
		int get_NoOfSubtractors();
		void set_NoOfSubtractors(int);
		int get_NoOfRegisters();
		void set_NoOfRegisters(int);
		int get_sizeOfRegisters();
		void set_sizeOfRegisters(int);
};

