#include <stdio.h>

void main()
{
    int c1 = 21;
    int a1;

    if (c1 == 21)
    {
        a1 = c1--;
        a1 = a1 / ++c1;
    }
    else
    {
        a1 = ++c1 + c1++;
        a1 += ++c1 + c1++;
    }

    printf("%d", a1);
    //c1 = 21 olduqda cavab: a1 = 1
    //c1 = 10 olduqda cavab: a1=50
}