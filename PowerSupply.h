#pragma once
#include<iostream>
using namespace std;

class PowerSupply
{
	int wattage;
	string efficiencyRating;
	double price;
public:
	PowerSupply();
	PowerSupply(int,string,double);
	int get_wattage();
	void set_wattage(int);
	string get_efficiencyRating();
	void set_efficencyRating(string);
	double get_price();
	void set_price(double);
};

