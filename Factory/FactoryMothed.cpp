#include "FactoryMothed.h"
#include "Product.h"
#include <iostream>

CFactoryMothed::CFactoryMothed()
{
    std::cout << "create CFactoryMothed!" << std::endl;
}

CFactoryMothed::~CFactoryMothed()
{
    std::cout << "destory CFactoryMothed!" << std::endl;
}

CFactoryMothedA::CFactoryMothedA()
{
    std::cout << "create CFactoryMothedA!" << std::endl;
}

CFactoryMothedA::~CFactoryMothedA()
{
    std::cout << "destory CFactoryMothedA!" << std::endl;
}

/*工厂A创建产品A*/
CProduct* CFactoryMothedA::concreateProduct()
{
    return new CProductA();
}

CFactoryMothedB::CFactoryMothedB()
{
    std::cout << "create CFactoryMothedB!" << std::endl;
}

CFactoryMothedB::~CFactoryMothedB()
{
    std::cout << "destory CFactoryMothedB!" << std::endl;
}

/*工厂B创建产品B*/
CProduct* CFactoryMothedB::concreateProduct()
{
    return new CProductB();
}