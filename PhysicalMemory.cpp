#include "PhysicalMemory.h"

PhysicalMemory::PhysicalMemory()
{
    capacity = 0;
}

PhysicalMemory::PhysicalMemory(int capacity)
{
    this->capacity = capacity;
}

int PhysicalMemory::get_capacity()
{
    return this->capacity;
}

void PhysicalMemory::set_capacity(int capacity)
{
    this->capacity = capacity;
}
