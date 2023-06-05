
#include "stateMng.h"
#include "stateMode.h"
#include <iostream>


CBlueState::CBlueState()
{
    std::cout << "create CBlueState object." << std::endl;
}

CBlueState::~CBlueState()
{
    std::cout << "destory CBlueState object." << std::endl;
}

void CBlueState::handlePush(CStateMng *pStateMng)
{
    /*如果当前是蓝色状态，则切换到绿色状态*/
    pStateMng->setState(new CGreenState());
}

void CBlueState::handlePull(CStateMng *pStateMng)
{
    /*如果当前是蓝色状态，则切换到红色状态*/
    pStateMng->setState(new CRedState());
}

void CBlueState::getColor()
{
    std::cout << "current state is blue" << std::endl;
}


CGreenState::CGreenState()
{
    std::cout << "create CGreenState object." << std::endl;
}

CGreenState::~CGreenState()
{
    std::cout << "destory CGreenState object." << std::endl;
}

void CGreenState::handlePush(CStateMng *pStateMng)
{
    /*如果当前是蓝色状态，则切换到绿色状态*/
    pStateMng->setState(new CRedState());
}

void CGreenState::handlePull(CStateMng *pStateMng)
{
    /*如果当前是蓝色状态，则切换到红色状态*/
    pStateMng->setState(new CBlueState());
}

void CGreenState::getColor()
{
    std::cout << "curren state is green" << std::endl;
}


CRedState::CRedState()
{
    std::cout << "create CRedState object." << std::endl;
}

CRedState::~CRedState()
{
    std::cout << "destory CRedState object." << std::endl;
}

void CRedState::handlePush(CStateMng *pStateMng)
{
    /*如果当前是蓝色状态，则切换到绿色状态*/
    pStateMng->setState(new CBlueState());
}

void CRedState::handlePull(CStateMng *pStateMng)
{
    /*如果当前是蓝色状态，则切换到红色状态*/
    pStateMng->setState(new CGreenState());
}

void CRedState::getColor()
{
    std::cout << "curren state is red" << std::endl;
}