#ifndef _ADAPTEE_H_
#define _ADAPTEE_H_
#include <string>

/*被适配的类*/
class CAdaptee
{
public:
    CAdaptee();
    ~CAdaptee();

    /*需要被适配的接口*/
    void interface(const std::string &str);
};

#endif