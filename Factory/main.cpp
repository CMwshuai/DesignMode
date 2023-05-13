
/*模板方法宏*/
#define _FACTORY_METHOD_

/*简单工厂宏*/
//#define _FACTORY_SIMPLE_

/*抽象工厂宏*/
//#define _FACTORY_ABSTROCT_

#if defined(_FACTORY_METHOD_) || defined(_FACTORY_SIMPLE_)
#include "SimpleFactory.h"
#include "FactoryMothed.h"
#include "Product.h"
#elif defined(_FACTORY_ABSTROCT_)
#include "AbstractFactory.h"
#include "AbstractProduct.h"
#endif 
#include <iostream>
#include <algorithm>
#include <atomic>

int main()
{
#if defined(_FACTORY_METHOD_)/*工厂方法*/
    /*创建工厂A*/
    CFactoryMothed* pFactoryMothedA = new CFactoryMothedA();

    /*使用工厂A创建产品A*/
    CProduct* pProductA = pFactoryMothedA->concreateProduct();

    /*释放产品A资源*/
    if (nullptr != pProductA)
    {
        delete pProductA;
        pProductA = nullptr;
    }

    /*释放工厂A资源*/
    if (nullptr != pFactoryMothedA)
    {
        delete pFactoryMothedA;
        pFactoryMothedA = nullptr;
    }

    /*创建工厂B*/
    CFactoryMothed* pFactoryMothedB = new CFactoryMothedB();

    /*创建产品B*/
    CProduct* pProductB = pFactoryMothedB->concreateProduct();

    /*释放产品B资源*/
    if (nullptr != pProductB)
    {
        delete pProductB;
        pProductB = nullptr;
    }

    /*释放工厂B资源*/
    if (nullptr != pFactoryMothedB)
    {
        delete pFactoryMothedB;
        pFactoryMothedB = nullptr;
    }

#elif defined(_FACTORY_SIMPLE_) /*简单工厂*/

    /*创建工厂*/
    CSimpleFactory *pSimpleFactory = new CSimpleFactory();
    /*创建产品A*/
    CProduct *pProduct = pSimpleFactory->concreateProduct(1);
    
    /*释放产品A资源*/
    if (nullptr != pProduct)
    {
        delete pProduct;
        pProduct = nullptr;
    }
    
    /*创建产品B*/
    pProduct = pSimpleFactory->concreateProduct(2);
    /*释放产品B资源*/
    if (nullptr != pProduct)
    {
        delete pProduct;
        pProduct = nullptr;
    }

    /*释放简单工厂资源*/
    if (nullptr != pSimpleFactory)
    {
        delete pSimpleFactory;
        pSimpleFactory = nullptr;
    }

#elif defined(_FACTORY_ABSTROCT_)/*抽象工厂*/
/*创建工厂A*/
CFactoryAbstract *pFactoryMathedA = new CFactoryAbstractA();
/*使用工厂A创建产品A1*/
CAbstractProductA *pProductA1 =  pFactoryMathedA->concreateProductA();
/*使用工厂A创建产品B1*/
CAbstractProductB *pProductB1 = pFactoryMathedA->concreateProductB();

if (nullptr != pFactoryMathedA)
{
    delete pFactoryMathedA;
    pFactoryMathedA = nullptr;
}

if (nullptr != pProductA1)
{
    delete pProductA1;
    pProductA1 = nullptr;
}

if (nullptr != pProductB1)
{
    delete pProductB1;
    pProductB1 = nullptr;
}

/*创建工厂B*/
CFactoryAbstract *pFactoryMathedB= new CFactoryAbstractB();
/*使用工厂B创建产品A2*/
CAbstractProductA *pProductA2 =  pFactoryMathedB->concreateProductA();
/*使用工厂B创建产品B2*/
CAbstractProductB *pProductB2 = pFactoryMathedB->concreateProductB();

if (nullptr != pFactoryMathedB)
{
    delete pFactoryMathedB;
    pFactoryMathedB = nullptr;
}

if (nullptr != pProductA2)
{
    delete pProductA2;
    pProductA2 = nullptr;
}

if (nullptr != pProductB2)
{
    delete pProductB2;
    pProductB2 = nullptr;
}

#endif

    return 0;
}