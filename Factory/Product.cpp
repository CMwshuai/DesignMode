#include "Product.h"
#include <iostream>


CProductA::CProductA()
{
    std::cout << "product A create!" << std::endl;
}

CProductA::~CProductA()
{
    std::cout << "product A destory!" << std::endl;
}

CProductB::CProductB()
{
    std::cout << "product B create!" << std::endl;
}

CProductB::~CProductB()
{
    std::cout << "product B destory!" << std::endl;
}
