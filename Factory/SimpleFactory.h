#ifndef _SIMPLEFACTORY_H_
#define _SIMPLEFACTORY_H_

class CProduct;

/*简单工厂类*/
class CSimpleFactory
{
public:
    CSimpleFactory();
    ~CSimpleFactory();
    
    /*根据传入的参数来判断实例化具体的产品*/    
    CProduct* concreateProduct(int iProduct);
};

#endif