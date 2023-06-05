#include "stateMng.h"
#include "stateMode.h"

#include <iostream>

CStateMng::CStateMng()
{
    m_pState = new CBlueState();
    std::cout << "create CStateMng object!" << std::endl;
}

CStateMng::~CStateMng()
{
    std::cout << "destory CStateMng object!" << std::endl;
}

/*用来改变状态，实现状态的切换*/
void CStateMng::setState(CState *pState)
{
    if (nullptr != m_pState)
    {
        delete m_pState;
        m_pState = nullptr;
    }
    m_pState = pState;
}

/*状态切换的细节部分，无需关心子类的具体实现*/
void CStateMng::push()
{
    if (nullptr != m_pState)
    {
        m_pState->getColor();
        m_pState->handlePush(this);
    }

}

/*拉方式切换状态，无需关系自类的具体实现*/
void CStateMng::pull()
{
    if (nullptr != m_pState)
    {
        m_pState->getColor();
        m_pState->handlePull(this);
    }
}