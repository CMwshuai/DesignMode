#include "observer.h"
#include "subject.h"


int main()
{
    /*创建主题对象*/
    CSubjectBase *pSubjectA = new CSubjectA();
    CSubjectBase *pSubjectB = new CSubjectB();

    /*创建观察者A,即订阅者，并将其添加到订阅者列表中，当订阅的主题有改变，则会通知订阅者作出相应的操作*/
    CObserverBase *pObserverA = new CObserverA();
    pSubjectA->attach(pObserverA);

     /*创建观察者B,即订阅者，并将其添加到订阅者列表中，当订阅的主题有改变，则会通知订阅者作出相应的操作*/
    CObserverBase *pObserverB = new CObserverB();
    pSubjectA->attach(pObserverB);

    /*CSubjectA对象状态改变时，通知CObserverA和CObserverB对象进行相关的操作*/
    pSubjectA->notifyObserver();

    /*移除订阅者CObserverB，此时通知之后通知CObserverA*/
    pSubjectA->detach(pObserverB);
    pSubjectA->notifyObserver();

    /*主题CSubjectB被订阅，并在状态改变时，通知订阅者*/
    pSubjectB->attach(pObserverA);
    pSubjectB->attach(pObserverB);
    pSubjectB->notifyObserver();

    if (nullptr != pSubjectA)
    {
        delete pSubjectA;
        pSubjectA = nullptr;
    }

    if (nullptr != pSubjectB)
    {
        delete pSubjectB;
        pSubjectB = nullptr;
    }

    if (nullptr != pObserverA)
    {
        delete pObserverA;
        pObserverA = nullptr;
    }

    if (nullptr != pObserverB)
    {
        delete pObserverB;
        pObserverB = nullptr;
    }

    return 0;
}