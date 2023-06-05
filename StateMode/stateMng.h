#ifndef _STATEMNG_H_
#define _STATEMNG_H_

class CState;

class CStateMng
{
public:
    CStateMng();
    ~CStateMng();

    /*用来改变状态，实现状态的切换*/
    void setState(CState *pState);

    /*状态切换的细节部分，无需关心子类的具体实现*/
    void push();

    /*拉方式切换状态，无需关系自类的具体实现*/
    void pull();

private:
    CState *m_pState;
};




#endif 