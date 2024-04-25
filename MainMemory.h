#pragma once
#include<iostream>
using namespace std;
class MainMemory     // refers to RAM
{
	int capacity;
	string technologyType;
public:
	MainMemory();
	MainMemory(int, string);
	int get_capacity();
	void set_capacity(int);
	string get_technologyType();
	void set_technologyType(string);
};

