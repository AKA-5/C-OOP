#include "ComputerAssembly.h"

ComputerAssembly::ComputerAssembly()
{
    gc = new GraphicsCard;
    SD = new StorageDevice;
    NC = new NetworkCard;
    battery = new Battery;
    PS = new PowerSupply;
    totalPrice = 0.0;
    PC_case = {};
}

ComputerAssembly::ComputerAssembly(double totalPrice, Battery *battery, PowerSupply *PS, NetworkCard* NC, StorageDevice* SD, GraphicsCard* gc)
    : totalPrice(totalPrice), battery(battery), PS(PS),NC(NC),SD(SD),PC_case(PC_case),gc(gc)
{

}

Battery & ComputerAssembly::get_battery() 
{
    return *battery;
}

void ComputerAssembly::set_battery(Battery *battery) 
{
    this->battery = battery;
}

Case & ComputerAssembly::get_PC_case()
{
    return PC_case;
}

void ComputerAssembly::set_PC_case(Case& PC_case) 
{
    this->PC_case = PC_case;
}

StorageDevice & ComputerAssembly::get_SD()
{
    return *SD;
}

void ComputerAssembly::set_SD(StorageDevice *SD)
{
    this->SD = SD;
}

PowerSupply &ComputerAssembly::get_PS() 
{
    return *PS;
}

void ComputerAssembly::set_PS(PowerSupply* PS)
{
    this->PS = PS;
}

NetworkCard &ComputerAssembly::get_NC() 
{
    return *NC;
}

void ComputerAssembly::set_NC(NetworkCard *NC)
{
    this->NC = NC;
}


double ComputerAssembly::get_totalPrice() 
{
    return this->totalPrice;
}

void ComputerAssembly::set_totalPrice(double totalPrice)
{
    this->totalPrice= totalPrice;

}

GraphicsCard* ComputerAssembly::get_gc()
{
    return gc;
}
void ComputerAssembly::set_gc(GraphicsCard* gc)
{
    this->gc = gc;
}
//de-allocating dynamic memory
ComputerAssembly::~ComputerAssembly()
{
    delete SD;
    delete NC;
    delete PS;
    delete battery;
    delete gc;
}
