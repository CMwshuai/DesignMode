#ifndef _PRODUCT_H_
#define _PRODUCT_H_
/*产品类头文件*/
class CProduct
{
public:
    CProduct() {};
    virtual ~CProduct(){};
};

class CProductA:public CProduct
{
public:
    CProductA();
    ~CProductA();
};

class CProductB:public CProduct
{
public:
    CProductB();
    ~CProductB();
};

class CProductC:public CProductB
{
public:
    CProductC();
    ~CProductC();
};

#endif