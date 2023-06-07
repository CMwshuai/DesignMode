
#include <iostream>
#include "tv.h"

CTv::CTv()
{
    std::cout << "create CTv object." << std::endl;
}

CTv::~CTv()
{
    std::cout << "destory CTv object." << std::endl;
}

void CTv::turnOn()
{
    std::cout << "turn on tv." << std::endl;
}

void CTv::turnOff()
{
    std::cout << "turn off tv." << std::endl;
}

void CTv::changeChannel(const int &iChannel)
{
    std::cout << "current tv channel is " << iChannel << "." << std::endl;
}
