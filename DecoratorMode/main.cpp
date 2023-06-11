#include <iostream>
#include "decorator.h"


int main()
{
    /*面包+芹菜+羊肉 = 10.5+4+1.5=16*/
    CBread objBread("Bread + Celery + Mutton!");
    CCelery objCelery(&objBread);
    CMutton objMutton(&objCelery);
    objMutton.showDesc();

    /*面包+青菜 = 10.5 + 1 = 11.5*/
    CBread objBread1("Bread + GreenGrocery");
    CGreenGrocery objGreenGrocery(&objBread1);
    objGreenGrocery.showDesc();

    /*面包 + 猪肉 + 羊肉 = 10.5 + 4 + 3 = 17.5*/
    CBread objBread2("Bread + Pork + Mutton");
    CPork objPork(&objBread2);
    CMutton objMutton1(&objPork);
    objMutton1.showDesc();

    return  0;
}