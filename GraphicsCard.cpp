#include "GraphicsCard.h"

GraphicsCard::GraphicsCard() 
{
    brand = "";
    memorySize = 0;
    price = 0.0;
}

GraphicsCard::GraphicsCard(string brand, int memorySize, double price) 
{
    this->brand = brand;
    this->memorySize = memorySize;
    this->price = price;
}

string GraphicsCard::get_brand() 
{
    return this->brand;
}

void GraphicsCard::set_brand(string brand)
{
    this->brand = brand;
}

int GraphicsCard::get_memorySize() 
{
    return this->memorySize;
}

void GraphicsCard::set_memorySize(int memorySize)
{
    this->memorySize = memorySize;
}

double GraphicsCard::get_price() 
{
    return this->price;
}

void GraphicsCard::set_price(double price) 
{
    this->price = price;
}
