#include "strategyMode.h"
#include <iostream>

int main()
{
    CStrategyMode strategyMode;
    CCookMode1 cookMode1;
    CCookMode2 cookMode2;
    /*做饭方式1*/
    strategyMode.method(cookMode1);
    
    /*做饭方式2*/
    strategyMode.method(cookMode2);


    return 0;
}