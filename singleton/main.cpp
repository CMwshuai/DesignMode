
/*懒汉模式定*/
#define _SLOB_
/*饿汉全局变量模式*/
//#define _GLOABLE_
/*饿汉局部变量模式*/
//#define _LOCAL_

#ifdef _SLOB_
#include "singletonDynamic.h"
#elif defined(_GLOABLE_)
#include "singletonGlobal.h"
#elif defined(_LOCAL_)
#include "singletonLocal.h"
#endif 

#include <iostream>

int main()
{
#ifdef _SLOB_ //懒汉模式
    CSingletonDynamic::getInstance()->doThing();
    CSingletonDynamic::deleteInstance();
#elif defined(_GLOABLE_) //饿汉全局变量模式
    CSingletonGlobal::getInstance().get()->doThing();
    //CSingletonGlobal::deleteInstance();
#else //饿汉局部静态变量模式
    CSingletonLocal::getInstance().doThing();
#endif

    return 0;
}