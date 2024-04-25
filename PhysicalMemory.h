#pragma once
class PhysicalMemory
{
	int capacity;  // It refers to RAM and can be 8/16 Gb 
public:
	PhysicalMemory();
	PhysicalMemory(int);
	int get_capacity();
	void set_capacity(int);
};

