#include "NetworkCard.h"
#include "NetworkCard.h"

NetworkCard::NetworkCard()
{
    type = "";
    speed = 0;
    price = 0.0;
}

NetworkCard::NetworkCard(string type, int speed, double price)
{
    this->type = type;
    this->speed = speed;
    this->price = price;
}

string NetworkCard::get_type()
{
    return this->type;
}

void NetworkCard::set_type(string type)
{
    this->type = type;
}

int NetworkCard::get_speed() 
{
    return this->speed;
}

void NetworkCard::set_speed(int speed) 
{
    this->speed = speed;
}

double NetworkCard::get_price() 
{
    return this->price;
}

void NetworkCard::set_price(double price)
{
    this->price = price;
}
