#pragma once
#include<iostream>
using namespace std;
class Case
{
	string fromFactor;
	string color;
public:
	Case();
	Case(string, string);
	string get_fromFactor();
	void set_fromFactor(string);
	string get_color();
	void set_color(string);
};

