#include <iostream>
#include "adaptee.h"

CAdaptee::CAdaptee()
{
    std::cout << "create Adaptee object!" << std::endl;
}

CAdaptee::~CAdaptee()
{
    std::cout << "destory Adaptee object!" << std::endl;
}

void CAdaptee::interface(const std::string &str)
{
    std::cout << str << "CAdaptee interface exec." << std::endl;
}