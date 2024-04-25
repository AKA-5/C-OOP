#include "Case.h"

Case::Case()
{
    fromFactor = "";
    color = "";
}

Case::Case(string fromFactor, string color)
{
    this->fromFactor = fromFactor;
    this->color = color;
}

string Case::get_fromFactor()
{
    return this->fromFactor;
}

void Case::set_fromFactor(string fromFactor)
{
    this->fromFactor = fromFactor;
}

string Case::get_color()
{
    return this->color;
}

void Case::set_color(string color) 
{
    this->color = color;
}
