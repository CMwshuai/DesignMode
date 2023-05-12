#include <iostream>
#include "AbstractProduct.h"

CAbstractProductA::CAbstractProductA()
{
    std::cout << "create CAbstractProductA." << std::endl;
}
CAbstractProductA::~CAbstractProductA()
{
    std::cout << "destory CAbstractProductA." << std::endl;
}

CAbstractProductB::CAbstractProductB()
{
    std::cout << "create CAbstractProductB." << std::endl;
}
CAbstractProductB::~CAbstractProductB()
{
    std::cout << "destory CAbstractProductB." << std::endl;
}

CProductA1::CProductA1()
{
    std::cout << "create CProductA1." << std::endl;
}
CProductA1::~CProductA1()
{
    std::cout << "destory CProductA1." << std::endl;
}

CProductA2::CProductA2()
{
    std::cout << "create CProductA2." << std::endl;
}
CProductA2::~CProductA2()
{
    std::cout << "destory CProductA2." << std::endl;
}

CProductB1::CProductB1()
{
    std::cout << "create CProductB1." << std::endl;
}
CProductB1::~CProductB1()
{
    std::cout << "destory CProductB1." << std::endl;
}

CProductB2::CProductB2()
{
    std::cout << "create CProductB2." << std::endl;
}
CProductB2::~CProductB2()
{
    std::cout << "destory CProductB2." << std::endl;
}