#include "PowerSupply.h"

PowerSupply::PowerSupply() 
{
    wattage = 0;
    efficiencyRating = "";
    price = 0.0;
}

PowerSupply::PowerSupply(int wattage, string efficiencyRating, double price) 
{
    this->wattage = wattage;
    this->efficiencyRating = efficiencyRating;
    this->price = price;
}

int PowerSupply::get_wattage()
{
    return this->wattage;
}

void PowerSupply::set_wattage(int wattage) 
{
    this->wattage = wattage;
}

string PowerSupply::get_efficiencyRating()
{
    return this->efficiencyRating;
}

void PowerSupply::set_efficencyRating(string efficiencyRating)
{
    this->efficiencyRating = efficiencyRating;
}

double PowerSupply::get_price() 
{
    return this->price;
}

void PowerSupply::set_price(double price) 
{
    this->price = price;
}
