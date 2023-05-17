
#ifndef _STRATEGYMODE_H_
#define _STRATEGYMODE_H_

class CCook
{
public:
    CCook();
    ~CCook();
    
    /*做饭*/
    virtual void cook() = 0;
};


class CCookMode1 : public CCook
{
public:
    CCookMode1();
    ~CCookMode1();

    void cook();
};

class CCookMode2 : public CCook
{
public:
    CCookMode2();
    ~CCookMode2();

    void cook();

};

class CStrategyMode
{
public:
    CStrategyMode();
    ~CStrategyMode();

    void method(CCook &cookObj);
};

#endif