#ifndef _ABSTRACTPRODUCT_H_
#define _ABSTRACTPRODUCT_H_

/*抽象产品A抽象基类*/
class CAbstractProductA
{
public:
    CAbstractProductA();
    virtual ~CAbstractProductA();
};

/*抽象产品B抽象基类*/
class CAbstractProductB
{
public:
    CAbstractProductB();
    virtual ~CAbstractProductB();
};

/*产品A1*/
class CProductA1 : public CAbstractProductA
{
public:
    CProductA1();
    virtual ~CProductA1();
};

/*产品A2*/
class CProductA2 : public CAbstractProductA
{
public:
    CProductA2();
    virtual ~CProductA2();
};

/*产品B1*/
class CProductB1 : public CAbstractProductB
{
public:
    CProductB1();
    virtual ~CProductB1();
};

/*产品B2*/
class CProductB2 : public CAbstractProductB
{
public:
    CProductB2();
    virtual ~CProductB2();
};

#endif