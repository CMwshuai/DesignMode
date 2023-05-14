#ifndef _OBSERVER_H_
#define _OBSERVER_h_

class  CObserverBase
{
public:
    CObserverBase();
    virtual ~CObserverBase();

    virtual void update() = 0;
};

class CObserverA : public CObserverBase
{
public:
    CObserverA();
    ~CObserverA();

    virtual void update();
};

class CObserverB : public CObserverBase
{
public:
    CObserverB();
    ~CObserverB();
    virtual void update();
};


#endif