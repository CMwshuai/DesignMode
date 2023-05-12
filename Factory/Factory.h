#ifndef _FACTORY_H_
#define _FACTORY_H_

class CProduct;

class CFactory
{
public:
    CFactory();
    ~CFactory();
    
    /*创建产品*/
    CProduct* concreateProduct(int iProduct);
};

#endif