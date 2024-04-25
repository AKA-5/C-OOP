#pragma once
#include<iostream>
using namespace std;

class NetworkCard
{
	string type;
	int speed;
	double price;
public:
	NetworkCard();
	NetworkCard(string, int, double);
	string get_type();
	void set_type(string);
	int get_speed();
	void set_speed(int);
	double get_price();
	void set_price(double);
};

