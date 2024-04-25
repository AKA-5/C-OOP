#pragma once
#include<iostream>
using namespace std;

class StorageDevice		// SSD or HDD
{
	string type;
	int capacity;
	double price;
public:
	StorageDevice();
	StorageDevice(string, int, double);
	string get_type();
	void set_type(string);
	int get_capacity();
	void set_capacity(int);
	double get_price();
	void set_price(double);
};

