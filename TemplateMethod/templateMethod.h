#ifndef _TEMPLATEMETHOD_H_
#define _TEMPLATEMETHON_H_

class CWork
{
public:
    CWork();
    virtual ~CWork();

    /*在宿舍起床*/
    virtual void weakUp() final;
    
    /*吃饭*/
    virtual void eat() final;

    /*步骤3需要根据具体的环境作出不同的操作*/
    virtual void goWork() = 0;

    void templateMethod();
};

/*步行上班*/
class COnFootWork : public CWork
{
public:
    COnFootWork();
    virtual ~COnFootWork();

    void goWork();
};

/*开车上班*/
class CDirveWork : public CWork
{
public:
    CDirveWork();
    ~CDirveWork();

    void goWork();
};

/*座地铁上班*/
class CSubwayWork : public CWork
{
public:
    CSubwayWork();
    ~CSubwayWork();
    
    void goWork();
};

#endif