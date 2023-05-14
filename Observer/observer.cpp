
#include "observer.h"
#include <iostream>

CObserverBase::CObserverBase()
{
    std::cout << "create CObserverBase object." << std::endl;
}
CObserverBase::~CObserverBase()
{
    std::cout << "destory CObserverBase object." << std::endl;
}

CObserverA::CObserverA()
{
    std::cout << "create CObserverA object." << std::endl;
}
CObserverA::~CObserverA()
{
    std::cout << "destory CObserverA object." << std::endl;
}
void CObserverA::update()
{
    std::cout << "CObserverA update." << std::endl;
}

CObserverB::CObserverB()
{
    std::cout << "create CObserverB object." << std::endl;
}
CObserverB::~CObserverB()
{
    std::cout << "destory CObserverB object." << std::endl;
}
void CObserverB::update()
{
    std::cout << "CObserverB update." << std::endl;
}