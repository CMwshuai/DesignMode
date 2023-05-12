#ifndef _FACTORY_ABSTRACT_H_
#define _FACTORY_ABSTRACT_H_

class CAbstractProductA;
class CAbstractProductB;

class CFactoryAbstract
{
public:
    CFactoryAbstract() ;
    virtual ~CFactoryAbstract();
    
    /*创建产品*/
    virtual CAbstractProductA* concreateProductA() = 0;
    virtual CAbstractProductB* concreateProductB() = 0;
};

class CFactoryAbstractA : public CFactoryAbstract
{
public:
    CFactoryAbstractA();
    virtual ~CFactoryAbstractA();

    CAbstractProductA* concreateProductA();
    CAbstractProductB* concreateProductB();
    
};

class CFactoryAbstractB : public CFactoryAbstract
{
public:
    CFactoryAbstractB();
    virtual ~CFactoryAbstractB();

    CAbstractProductA* concreateProductA();
    CAbstractProductB* concreateProductB();
};

#endif