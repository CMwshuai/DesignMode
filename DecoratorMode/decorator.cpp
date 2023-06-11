#include <iostream>
#include "decorator.h"


CComponent::CComponent()
{
    std::cout << "create CComponent object!" << std::endl;
}

CComponent::~CComponent()
{
    std::cout << "destory CComponent object!" << std::endl;
}

void CComponent::showDesc()
{
    std::cout << "Name:" << getDesc() << std::endl;
    std::cout << "Price:" << getCost() << std::endl;
}


CBread::CBread(std::string strDesc)
{
    m_description = strDesc;
    std::cout << "create CBread object!" << std::endl;
}

CBread::~CBread()
{
    std::cout << "destory CBread object!" << std::endl;
}

std::string CBread::getDesc()
{
    return  m_description;
}

double CBread::getCost()
{
    return 10.5;
}

CDecorator::CDecorator(CComponent *pObjComponent)
{
    m_pComponent = pObjComponent;
    std::cout << "create CDecorator object!" << std::endl;
}

CDecorator::~CDecorator()
{
    std::cout << "destory CDecorator object!" << std::endl;
}

std::string CDecorator::getDesc()
{
    return m_pComponent->getDesc();
}

double CDecorator::getCost()
{
    return m_pComponent->getCost();
}

CPork::CPork(CComponent *pObjComponent)
 : CDecorator(pObjComponent)
{
    std::cout << "create CPork object!" << std::endl;
}

CPork::~CPork()
{
    std::cout << "destory CPork object!" << std::endl;
}

std::string CPork::getDesc()
{
    return CDecorator::getDesc();
}

double CPork::getCost()
{
    return 3.0 + CDecorator::getCost();
}

CMutton::CMutton(CComponent *pObjComponent)
 : CDecorator(pObjComponent)
{
    std::cout << "create CMutton object!" << std::endl;
}

CMutton::~CMutton()
{
    std::cout << "destory CMutton object!" << std::endl;
}

std::string CMutton::getDesc()
{
    return CDecorator::getDesc();
}

double CMutton::getCost()
{
    return 4.0 + CDecorator::getCost();
}


CCelery::CCelery(CComponent *pObjComponent)
 : CDecorator(pObjComponent)
{
    std::cout << "create CCelery object!" << std::endl;
}

CCelery::~CCelery()
{
    std::cout << "destory CCelery object!" << std::endl;
}

std::string CCelery::getDesc()
{
    return CDecorator::getDesc();
}

double CCelery::getCost()
{
    return 1.5 + CDecorator::getCost();
}

CGreenGrocery::CGreenGrocery(CComponent *pObjComponent)
 : CDecorator(pObjComponent)
{
    std::cout << "create CGreenGrocery object!" << std::endl;
}

CGreenGrocery::~CGreenGrocery()
{
    std::cout << "destory CGreenGrocery object!" << std::endl;
}

std::string CGreenGrocery::getDesc()
{
    return CDecorator::getDesc();
}

double CGreenGrocery::getCost()
{
    return 1.0 + CDecorator::getCost();
}