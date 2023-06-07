#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "tv.h"

class CCommand
{
public:
    CCommand();
    virtual ~CCommand();

    void setReceive(const CTv &objTv);

    virtual void execute() = 0;
protected:
    CTv *m_pTv;
};


class CCommandChannel : public CCommand
{
public:
    CCommandChannel();
    ~CCommandChannel();
    
    void setChannel(const int &iChannel);

    void execute();
private:
    int m_iChannel;
};

class CCommandOn : public CCommand
{
public:
    CCommandOn();
    ~CCommandOn();

    void execute();
};

class CCommandOff : public CCommand
{
public:
    CCommandOff();
    ~CCommandOff();

    void execute();
};


#endif