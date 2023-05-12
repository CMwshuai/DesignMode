#ifndef _FACTORY_NODETHD_H_
#define _FACTORY_NODETHD_H_

class CProduct;

class CFactoryMothed
{
public:
    CFactoryMothed();
    virtual ~CFactoryMothed();
    
    /*创建产品*/
    virtual CProduct* concreateProduct() = 0;
};

class CFactoryMothedA : public CFactoryMothed
{
public:
    CFactoryMothedA();
    virtual ~CFactoryMothedA();

    CProduct* concreateProduct();
};

class CFactoryMothedB : public CFactoryMothed
{
public:
    CFactoryMothedB();
    virtual ~CFactoryMothedB();

    CProduct* concreateProduct();
};

#endif