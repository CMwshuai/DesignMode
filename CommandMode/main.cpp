#include <iostream>
#include "tv.h"
#include "command.h"
#include "commanMng.h"

int main()
{

    CTv objTv;

    //开机
    CCommandOn objCmdOn;
    objCmdOn.setReceive(objTv);

    //换台
    CCommandChannel objCmdChangeChannel;
    objCmdChangeChannel.setReceive(objTv);
    objCmdChangeChannel.setChannel(2);

    //关机
    CCommandOff objCmdOff;
    objCmdOff.setReceive(objTv);

    CCommandMng objCmdMng(objCmdOn, objCmdOff, objCmdChangeChannel);

    objCmdMng.turnOn();

    objCmdMng.changeChannel();

    objCmdMng.turnOff();

    return 0;
}