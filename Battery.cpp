#include "Battery.h"

Battery::Battery()
{
    capacity = 0;
}

Battery::Battery(int capacity) 
{
    this->capacity = capacity;
}

int Battery::get_capacity() 
{
    return this->capacity;
}

void Battery::set_capacity(int capacity) 
{
    this->capacity = capacity;
}
