
#include "strategyMode.h"
#include <iostream>

CCook::CCook()
{
    std::cout << "init CCook." << std::endl;
}

CCook::~CCook()
{
    std::cout << "destory CCook." << std::endl;
}

CCookMode1::CCookMode1()
{
    std::cout << "init CCookMode1." << std::endl;
}

CCookMode1::~CCookMode1()
{
    std::cout << "destory CCookModel." << std::endl;
}

void CCookMode1::cook()
{
    std::cout << "1、油烧热。" << std::endl;
    std::cout << "2、先方番茄。" << std::endl;
    std::cout << "3、再放鸡蛋。" << std::endl;
    std::cout << "4、翻炒出锅。" << std::endl;
}

CCookMode2::CCookMode2()
{
    std::cout << "init CCookMode2." << std::endl;
}

CCookMode2::~CCookMode2()
{
    std::cout << "destory CCookMode2." << std::endl;
}

void CCookMode2::cook()
{
    std::cout << "1、油烧热。" << std::endl;
    std::cout << "2、先放鸡蛋。" << std::endl;
    std::cout << "3、再方番茄。" << std::endl;
    std::cout << "4、翻炒出锅。" << std::endl;
}


CStrategyMode::CStrategyMode()
{
    std::cout << "init CStrategyMode." << std::endl;
}

CStrategyMode::~CStrategyMode()
{
    std::cout << "destory CStrategyMode." << std::endl;
}

void CStrategyMode::method(CCook &cookObj)
{
    cookObj.cook();
}