#include <iostream>
#include "commanMng.h"
#include "command.h"

CCommandMng::CCommandMng(const CCommand &cmdOn, const CCommand &cmdOff, const CCommand &cmdChannel)
{
    m_pCmdChannel =  &const_cast<CCommand&>(cmdChannel);
    m_pCmdOn = &const_cast<CCommand&>(cmdOn);
    m_pCmdOff = &const_cast<CCommand&>(cmdOff);
}
CCommandMng::~CCommandMng()
{
    std::cout << "destory CCommandMng object." << std::endl;
}

void CCommandMng::turnOn()
{
    if (nullptr != m_pCmdOn)
    {
        m_pCmdOn->execute();
    }    
}

void CCommandMng::turnOff()
{
    if (nullptr != m_pCmdOff)
    {
        m_pCmdOff->execute();
    }
}

void CCommandMng::changeChannel()
{
    if (nullptr != m_pCmdChannel)
    {
        m_pCmdChannel->execute();
    }
}