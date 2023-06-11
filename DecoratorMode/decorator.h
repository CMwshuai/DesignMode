#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include <string>

class CComponent
{
public:
    CComponent();
    virtual ~CComponent();
    
    /*获取描述信息*/
    virtual std::string getDesc() = 0;
    /*获取价格*/
    virtual double getCost() = 0;
    /*显示描述信息*/
    void showDesc();
};

/*面包，被装饰的类*/
class CBread : public CComponent
{
public:
    CBread(std::string strDesc);
    ~CBread();

    /*获取描述信息*/
    std::string getDesc();
    /*获取价格*/
    double getCost();

private:
    /*描述信息*/
    std::string m_description;

};

/*装饰器类基类*/
class CDecorator : public CComponent
{
public:
    CDecorator(CComponent *pObjComponent);
    virtual ~CDecorator();

    /*获取描述信息*/
    virtual std::string getDesc();
    /*获取价格*/
    virtual double getCost();
private:
    CComponent *m_pComponent;
};


/*具体的猪肉装饰器*/
class CPork : public CDecorator
{
public:
    CPork(CComponent *pObjComponent);
    ~CPork();

    /*获取描述信息*/
    std::string getDesc();
    /*获取价格*/
    double getCost();
};

/*具体的羊肉装饰器*/
class CMutton : public CDecorator
{
public:
    CMutton(CComponent *pObjComponent);
    ~CMutton();

    /*获取描述信息*/
    std::string getDesc();
    /*获取价格*/
    double getCost();
};

/*具体的芹菜装饰器*/
class CCelery : public CDecorator
{
public:
    CCelery(CComponent *pObjComponent);
    ~CCelery();

    /*获取描述信息*/
    std::string getDesc();
    /*获取价格*/
    double getCost();
};

/*具体的青菜装饰器*/
class CGreenGrocery : public CDecorator
{
public:
    CGreenGrocery(CComponent *pObjComponent);
    ~CGreenGrocery();

    /*获取描述信息*/
    std::string getDesc();
    /*获取价格*/
    double getCost();
};

#endif