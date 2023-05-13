#include "singletonGlobal.h"
#include <iostream>

/*全局变量饿汉模式单例*/
std::shared_ptr<CSingletonGlobal> CSingletonGlobal::m_instance(new CSingletonGlobal);

CSingletonGlobal::CSingletonGlobal()
{
    std::cout << "create CSingletonGlobal object." << std::endl;
}

CSingletonGlobal::~CSingletonGlobal()
{
    std::cout << "destory CSingletonGlobal object." << std::endl;
}

void CSingletonGlobal::doThing()
{
    std::cout << "CSingletonGlobal do thing." << std::endl;
}

std::shared_ptr<CSingletonGlobal> CSingletonGlobal::getInstance()
{
    return m_instance;
}