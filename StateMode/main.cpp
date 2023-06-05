#include <iostream>

#include "stateMng.h"

int main()
{
    CStateMng objStateMng;
    /*从蓝色状态转换为绿色状态*/
    objStateMng.push();
    /*从绿色状态转化为红色状态*/
    objStateMng.push();

    /*从红色状态转化为绿色状态*/
    objStateMng.pull();
    /*从绿色状态转化为蓝色状态*/
    objStateMng.pull();
}

