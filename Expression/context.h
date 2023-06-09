#ifndef _CONTEXT_H_
#define _CONTEXT_H_

class CVariable;

#include <map>


class CContext
{
public:
    CContext();
    virtual ~CContext();

    void addValue(CVariable &objValue , int iValue);
    int getValue(CVariable &objValue);
private:
    std::map<CVariable*, int> m_map;
};

#endif