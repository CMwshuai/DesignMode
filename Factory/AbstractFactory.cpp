#include <iostream>

#include "AbstractFactory.h"
#include "AbstractProduct.h"

CFactoryAbstract::CFactoryAbstract()
{
    std::cout << "create CFactoryAbstract." << std::endl;
}

CFactoryAbstract::~CFactoryAbstract()
{
    std::cout << "destroy CFactoryAbstract." << std::endl;
}


CFactoryAbstractA::CFactoryAbstractA()
{
    std::cout << "create CFactoryAbstractA." << std::endl;
}
CFactoryAbstractA::~CFactoryAbstractA()
{
    std::cout << "destory CFactoryAbstractA." << std::endl;
}

/*工厂A创建产品A1*/
CAbstractProductA* CFactoryAbstractA::concreateProductA()
{
    return new CProductA1();
}

/*工厂A创建产品B1*/
CAbstractProductB* CFactoryAbstractA::concreateProductB()
{
    return new CProductB1();
}


CFactoryAbstractB::CFactoryAbstractB()
{
    std::cout << "create CFactoryAbstractB." << std::endl; 
}
CFactoryAbstractB::~CFactoryAbstractB()
{
    std::cout << "destory CFactoryAbstractB." << std::endl;
}

/*工厂B创建产品A2*/
CAbstractProductA* CFactoryAbstractB::concreateProductA()
{
    return new CProductA2();
}

/*工厂B创建产品B2*/
CAbstractProductB* CFactoryAbstractB::concreateProductB()
{
    return new CProductB2();
}