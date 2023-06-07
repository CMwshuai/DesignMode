#ifndef _COMMAND_MNG_H_
#define _COMMAND_MNG_H_

class CCommand;

class CCommandMng
{
public:
    CCommandMng(const CCommand &cmdOn, const CCommand &cmdOff, const CCommand &cmdChannel);
    ~CCommandMng();

    void turnOn();
    void turnOff();
    void changeChannel();

private:
    CCommand *m_pCmdOn;
    CCommand *m_pCmdOff;
    CCommand *m_pCmdChannel;
};




#endif