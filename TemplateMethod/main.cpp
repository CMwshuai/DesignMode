#include "templateMethod.h"
#include <iostream>

int main()
{
    /*步行上班*/
    CWork *pOnFootWork = new COnFootWork();
    pOnFootWork->templateMethod();
    if (nullptr != pOnFootWork)
    {
        delete pOnFootWork;
        pOnFootWork = nullptr;
    }

    /*开车上班*/
    CWork *pDriveWork = new CDirveWork();
    pDriveWork->templateMethod();
    if (nullptr != pDriveWork)
    {
        delete pDriveWork;
        pDriveWork = nullptr;
    }

    /*坐地铁上报*/
    CWork *pSubwayWork = new CSubwayWork();
    pSubwayWork->templateMethod();
    if (nullptr != pSubwayWork)
    {
        delete pSubwayWork;
        pSubwayWork = nullptr;
    }

    return 0;
}
