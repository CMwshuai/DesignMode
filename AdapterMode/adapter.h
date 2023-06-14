#ifndef _ADAPTER_H_
#define _ADAPTER_H_

class CAdaptee;

/*适配器基类，用于声明新接口*/
class CTarget
{
public:
    CTarget();
    virtual ~CTarget();
    /*客户需要的新接口*/
    virtual int newInterface() = 0;
};

/*继承自基类，并在新接口中封装老接口*/
class CAdapter : public CTarget
{
public:
    CAdapter();
    ~CAdapter();

    int newInterface();
private:
    CAdaptee *m_pAdaptee;
};


#endif