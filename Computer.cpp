#include "Computer.h"

Computer::Computer()
{
    pm = new PhysicalMemory;
    mb = new MotherBoard;
    cpu = new CPU;
}

Computer::Computer(PhysicalMemory *pm, MotherBoard *mb, CPU *cpu)
{
    this->pm = pm;
    this->mb = mb;
    this->cpu = cpu;
}


PhysicalMemory & Computer::get_pm()
{
    return *pm;
}

void Computer::set_pm(PhysicalMemory *pm)
{
    this->pm = pm;
}

MotherBoard & Computer::get_mb()
{
    return *mb;
}

void Computer::set_mb(MotherBoard* mb) 
{
    this->mb = mb;
}

CPU &Computer::get_cpu() 
{
    return *cpu;
}

void Computer::set_cpu(CPU *cpu)
{
    this->cpu = cpu;
}
// de-allocation of memory
Computer::~Computer()
{
    delete pm;
    delete mb;
    delete cpu;
}

