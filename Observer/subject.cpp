#include "subject.h"
#include "observer.h"
#include <iostream>
#include <list>

CSubjectBase::CSubjectBase()
{
    std::cout << "create CSubjectBase." << std::endl;
}
CSubjectBase::~CSubjectBase()
{
    std::cout << "destory CSubjectBase." << std::endl;
}

/*注册观察者对象*/
void CSubjectBase::attach(CObserverBase* pObserver)
{
    m_observerLst.push_back(pObserver);
}

/*删除观察者对象*/
void CSubjectBase::detach(CObserverBase* pObserver)
{
    m_observerLst.remove(pObserver);
}

/*通知状态改变*/
void CSubjectBase::notifyObserver()
{
    for (auto itr = m_observerLst.cbegin(); itr != m_observerLst.end(); itr++)
    {
        (*itr)->update();
    }
}


CSubjectA::CSubjectA()
{
    std::cout << "create CSubjectA object." << std::endl;
}

CSubjectA::~CSubjectA()
{  
    std::cout << "destory CSubjectA object." << std::endl;
}

CSubjectB::CSubjectB()
{
    std::cout << "create CSubjectB object." << std::endl;
}

CSubjectB::~CSubjectB()
{
    std::cout << "destory CSubjectB object." << std::endl;
}

