#include "Factory.h"
#include "Product.h"
#include <iostream>

CFactory::CFactory()
{
    std::cout << "create CFactory!" << std::endl;
}

CFactory::~CFactory()
{
    std::cout << "destory CFactory!" << std::endl;
}

/*根据传入的类型来决定生产什么产品*/
CProduct* CFactory::concreateProduct(int iProduct)
{
    CProduct *pProduct = nullptr;
    switch(iProduct)
    {
        case 1:
            pProduct = (CProductA*)new CProductA();
            break;
        case 2:
            pProduct = (CProductB*) new CProductB();
            break;
        default:
            std::cout << "unknow product type! iProduct=" << iProduct << std::endl;
            break;
    }
    return pProduct;
}