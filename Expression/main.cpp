
#include <iostream>
#include "context.h"
#include "expression.h"


int main()
{
    /*创建变量*/
    CVariable objA;
    CVariable objB;

    /*创建常量*/
    CConstant objConstant(5);

    CContext objContext;
    objContext.addValue(objA, 8);
    objContext.addValue(objB, 6);

    CSubExpression objSub(objB, objConstant);
    std::cout << "6 - 5 = " << objSub.interpret(objContext) << std::endl;
    CAddExpression objAdd(objA, objSub);
    std::cout << "6 - 5 + 8  = " << objAdd.interpret(objContext) << std::endl;
    CMulExpression objMul(objA, objB);
    std::cout << "6 * 8  = " << objMul.interpret(objContext) << std::endl;
    CDivExpression objDiv(objMul, objAdd);
    std::cout << "(6 * 8) / (6 - 5 + 8) = ";
    std::cout << objDiv.interpret(objContext) << std::endl;

    return 0;
}