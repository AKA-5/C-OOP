#pragma once
#include<iostream>
using namespace std;
class GraphicsCard
{
	string brand;
	int memorySize;
	double price;
public:
	GraphicsCard();
	GraphicsCard(string, int, double);
	string get_brand();
	void set_brand(string);
	int get_memorySize();
	void set_memorySize(int);
	double get_price();
	void set_price(double);
};

