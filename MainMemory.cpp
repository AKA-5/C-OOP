#include "MainMemory.h"
 
MainMemory::MainMemory()
{
	capacity = 0;
	technologyType = "";   // can be silicon or semiconductor RAM
}

MainMemory::MainMemory(int capacity, string technologyType)
{
	this->capacity = capacity;
	this->technologyType = technologyType;
}

int MainMemory::get_capacity()
{
	return this->capacity;
}

void MainMemory::set_capacity(int capacity)
{
	this->capacity = capacity;
}

string MainMemory::get_technologyType()
{
	return this->technologyType;
}

void MainMemory::set_technologyType(string technologyType)
{
	this->technologyType = technologyType;
}