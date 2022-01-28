#include <stdio.h>

void main()
{
    int c1 = 11;
    int a1;

    if (c1 == 10)
    {
        a1 = ++c1;
        a1 *= c1--;
    }
    else
    {
        a1 = ++c1 + c1++;
        a1 += ++c1 + c1++;
    }

    printf("%d", a1);
    //c1 = 10 olduqda cavab: a1 = 121
    //c1 = 11 olduqda cavab: a1=54
}