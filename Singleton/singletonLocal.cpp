
#include "singletonLocal.h"
#include <iostream>

CSingletonLocal::CSingletonLocal()
{
    std::cout << "create CSingletonLocal object." << std::endl;
}

CSingletonLocal::~CSingletonLocal()
{
    std::cout << "destory CSingletonLocal object." << std::endl;
}

void CSingletonLocal::doThing()
{
    std::cout << "CSingletonLocal do thing." << std::endl;
}


CSingletonLocal& CSingletonLocal::getInstance()
{
    static CSingletonLocal objSingleton;
    return objSingleton;
} 