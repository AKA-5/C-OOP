#pragma once
#include<iostream>
using namespace std;
class Port
{
	string type;
	int baud_rate;
public:
	Port();
	Port(string, int);
	string get_type();
	void set_type(string);
	int get_baud_rate();
	void set_baud_rate(int);
};

