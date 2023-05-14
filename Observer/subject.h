#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <list>

class CObserverBase;

class CSubjectBase
{
public:
    CSubjectBase();
    virtual ~CSubjectBase();

    /*注册观察者对象*/
    void attach(CObserverBase* pObserver); 

    /*删除观察者对象*/
    void detach(CObserverBase* pObserver);

    /*状态改变后同志所有被观察者*/
    virtual void notifyObserver();

public:
    std::list<CObserverBase*> m_observerLst;
};


class CSubjectA : public CSubjectBase
{
public:
    CSubjectA();
    ~CSubjectA();
};

class CSubjectB : public CSubjectBase
{
public:
    CSubjectB();
    ~CSubjectB();
};

#endif 