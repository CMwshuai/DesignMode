#include <iostream>
#include "adaptee.h"
#include "adapter.h"

CTarget::CTarget()
{
    std::cout << "create CTarget object!" << std::endl;
}

CTarget::~CTarget()
{
    std::cout << "destory CTarget object!" << std::endl;
}

CAdapter::CAdapter()
{
    m_pAdaptee = nullptr;
    std::cout << "create CAdapter object!" << std::endl;
}

CAdapter::~CAdapter()
{
    if (nullptr != m_pAdaptee)
    {
        delete m_pAdaptee;
        m_pAdaptee = nullptr;
    }
    std::cout << "destory CAdapter object!" << std::endl;
}

int CAdapter::newInterface()
{
    std::cout << "CAdapter newInterface exec." << std::endl;

    if (nullptr == m_pAdaptee)
    {
        m_pAdaptee = new CAdaptee();
    }

    m_pAdaptee->interface("The CAdaptee is adapted by the CAdapter.");
}