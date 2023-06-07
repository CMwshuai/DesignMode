#include "command.h"
#include <iostream>

CCommand::CCommand()
{
    std::cout << "create CCommand object!" << std::endl;    
}

CCommand::~CCommand()
{
    std::cout << "destory CCommand object!" << std::endl;
}

void CCommand::setReceive(const CTv &objTv)
{
    m_pTv = const_cast<CTv*>(&objTv);
}

CCommandOn::CCommandOn()
{
    std::cout << "create CCommandOn object!" << std::endl;
}

CCommandOn::~CCommandOn()
{
    std::cout << "destory CCommandOn object!" << std::endl;
}

void CCommandOn::execute()
{
    m_pTv->turnOn();
}

CCommandOff::CCommandOff()
{
    std::cout << "create CCommandOff object!" << std::endl;
}

CCommandOff::~CCommandOff()
{
    std::cout << "destory CCommandOff object!" << std::endl;
}

void CCommandOff::execute()
{
    m_pTv->turnOff();
}

CCommandChannel::CCommandChannel()
{
    std::cout << "create CCommandChannel object!" << std::endl;
}

CCommandChannel::~CCommandChannel()
{
    std::cout << "destory CCommandChannel object!" << std::endl;
}
void CCommandChannel::setChannel(const int &iChannel)
{
    m_iChannel = iChannel;
}

void CCommandChannel::execute()
{
    m_pTv->changeChannel(m_iChannel);
}
