
#include <iostream>
#include "expression.h"
#include "context.h"

CExpression::CExpression()
{
    std::cout << "create CExpression object!" << std::endl;
}

CExpression::~CExpression()
{
    std::cout << "destory CExpression object!" << std::endl;
}

CAddExpression::CAddExpression(CExpression &objLeft, CExpression &objRight)
{
    m_pLeft = &objLeft;
    m_pRight = &objRight;
    std::cout << "create CAddExpression object!" << std::endl;
}

CAddExpression::~CAddExpression()
{
    std::cout << "destory CAddExpression object!" << std::endl;
}

int CAddExpression::interpret(CContext &objContext)
{
    return m_pLeft->interpret(objContext) + m_pRight->interpret(objContext);
}

CSubExpression::CSubExpression(CExpression &objLeft, CExpression &objRight)
{
    m_pLeft = &objLeft;
    m_pRight = &objRight;
    std::cout << "create CSubExpression object!" << std::endl;
}

CSubExpression::~CSubExpression()
{
    std::cout << "destory CSubExpression object!" << std::endl;
}

int CSubExpression::interpret(CContext &objContext)
{
    return m_pLeft->interpret(objContext) - m_pRight->interpret(objContext);
}

CMulExpression::CMulExpression(CExpression &objLeft, CExpression &objRight)
{
    m_pLeft = &objLeft;
    m_pRight = &objRight;
    std::cout << "create CMulExpression object!" << std::endl;
}

CMulExpression::~CMulExpression()
{
    std::cout << "destory CMulExpression object!" << std::endl;
}

int CMulExpression::interpret(CContext &objContext)
{
    return m_pLeft->interpret(objContext) * m_pRight->interpret(objContext);
}

CDivExpression::CDivExpression(CExpression &objLeft, CExpression &objRight)
{
    m_pLeft = &objLeft;
    m_pRight = &objRight;
    std::cout << "create CDivExpression object!" << std::endl;
}

CDivExpression::~CDivExpression()
{
    std::cout << "destory CDivExpression object!" << std::endl;
}

int CDivExpression::interpret(CContext &objContext)
{
    return m_pLeft->interpret(objContext) / m_pRight->interpret(objContext);
}


CVariable::CVariable()
{
    std::cout << "create CVariable object!" << std::endl;
}

CVariable::~CVariable()
{
    std::cout << "destory CVariable object!" << std::endl;
}

int CVariable::interpret(CContext &objContext)
{
    return objContext.getValue(*this);
}


CConstant::CConstant(const int &iValue)
    : m_iValue(iValue)
{
    std::cout << "create CContant object " << m_iValue << std::endl;
}

CConstant::~CConstant()
{
    std::cout << "destory CContant object." << std::endl;
}

int CConstant::interpret(CContext &objContext)
{
    return m_iValue;
}