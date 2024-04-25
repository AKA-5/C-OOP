#include "StorageDevice.h"

StorageDevice::StorageDevice()
{
    type = "";
    capacity = 0;
    price = 0.0;
}

StorageDevice::StorageDevice(string type, int capacity, double price)
{
    this->type = type;
    this->capacity = capacity;
    this->price = price;
}

void StorageDevice::set_type(string type)
{
    this->type = type;
}

string StorageDevice::get_type() 
{
    return this->type;
}

void StorageDevice::set_capacity(int capacity)
{
    this->capacity = capacity;
}


int StorageDevice::get_capacity() 
{
    return this->capacity;
}

void StorageDevice::set_price(double price)
{
    this->price = price;
}

double StorageDevice::get_price() 
{
    return this->price;
}


