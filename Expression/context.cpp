#include <iostream>
#include "context.h"
#include "expression.h"

CContext::CContext()
{
    std::cout << "create CContext object." << std::endl;
}
CContext::~CContext()
{
    std::cout << "destory CContext object." << std::endl;
}

void CContext::addValue(CVariable &objValue, int iValue)
{
    m_map.emplace(&objValue, iValue);
}

int CContext::getValue(CVariable &objValue)
{
    return m_map.at(&objValue);
}