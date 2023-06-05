#ifndef  _STATEMODE_H_
#define  _STATEMODE_H_

class CStateMng;

/*状态接口类*/
class CState
{
public:
    CState() {};
    virtual ~CState() {};
    virtual void handlePush(CStateMng *pStateMng) = 0;
    virtual void handlePull(CStateMng *pStateMng) = 0;
    virtual void getColor() = 0;
};

/*蓝色状态*/
class CBlueState : public CState
{
public:
    CBlueState();
    virtual ~CBlueState();
    void handlePush(CStateMng *pStateMng);
    void handlePull(CStateMng *pStateMng);
    void getColor();
};

/*绿色状态*/
class CGreenState : public CState
{
public:
    CGreenState();
    virtual ~CGreenState();
    void handlePush(CStateMng *pStateMng);
    void handlePull(CStateMng *pStateMng);
    void getColor();
};

/*红色状态*/
class CRedState : public CState
{
public:
    CRedState();
    virtual ~CRedState();
    void handlePush(CStateMng *pStateMng);
    void handlePull(CStateMng *pStateMng);
    void getColor();
};


#endif