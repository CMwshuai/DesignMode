#include "templateMethod.h"
#include <iostream>

CWork::CWork()
{
    std::cout << "init CWork." << std::endl;
}

CWork::~CWork()
{
    std::cout << "destory CWork." << std::endl;
}

void CWork::templateMethod()
{
    /*起床*/
    weakUp();

    /*吃饭*/
    eat();

    /*去上班*/
    goWork();
}

void CWork::weakUp()
{
    std::cout << "weak up." << std::endl;
}

void CWork::eat()
{
    std::cout << "eat." << std::endl;
}

COnFootWork::COnFootWork()
{
    std::cout << "init COnFootWork." << std::endl;
}

COnFootWork::~COnFootWork()
{
    std::cout << "destory COnFootWork." << std::endl;
}

void COnFootWork::goWork()
{
    std::cout << "on foot work." << std::endl;
}

CDirveWork::CDirveWork()
{
    std::cout << "init CDriveWork." << std::endl;
}

CDirveWork::~CDirveWork()
{
    std::cout << "destory CDriveWork." << std::endl;
}

void CDirveWork::goWork()
{
    std::cout << "drive work." << std::endl;
}

CSubwayWork::CSubwayWork()
{
    std::cout << "init CSubwayWork." << std::endl;
}

CSubwayWork::~CSubwayWork()
{
    std::cout << "destory CSubwayWork." << std::endl;
}

void CSubwayWork::goWork()
{
    std::cout << "subway work." << std::endl;
}