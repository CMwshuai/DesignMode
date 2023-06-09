#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

class CContext;

class CExpression
{
public:
    CExpression();
    virtual ~CExpression();
    virtual int interpret(CContext &objContext) = 0;

protected:
    CExpression *m_pLeft;
    CExpression *m_pRight;
};

/*加法类*/
class CAddExpression : public CExpression
{
public:
    CAddExpression(CExpression &objLeft, CExpression &objRight);
    ~CAddExpression();

    int interpret(CContext &objContext);
};

/*减法类*/
class CSubExpression : public CExpression
{
public:
    CSubExpression(CExpression &objLeft, CExpression &objRight);
    ~CSubExpression();

    int interpret(CContext &objContext);
};

/*乘法类*/
class CMulExpression : public CExpression
{
public:
    CMulExpression(CExpression &objLeft, CExpression &objRight);
    ~CMulExpression();

    int interpret(CContext &objContext);
};

/*除法类*/
class CDivExpression : public CExpression
{
public:
    CDivExpression(CExpression &objLeft, CExpression &objRight);
    ~CDivExpression();
    
    int interpret(CContext &objContext);
};

/*终结符类*/
class CConstant : public CExpression
{
public:
    CConstant(const int &iValue);
    ~CConstant();
    int interpret(CContext &objContext);
private:
    int m_iValue;
};

/*变量类*/
class CVariable : public CExpression
{
public:
    CVariable();
    ~CVariable();
    int interpret(CContext &objContext);
};

#endif