#include <stdio.h>

void main()
{
    int c1 = 14;
    int a1;

    if (c1 == 13)
    {
        a1 = ++c1 - c1++;

    }
    else
    {
        a1 = ++c1;
    }

    printf("%d", a1);
    //c1 = 13 olduqda cavab: a1 = 1
    //c1 = 14 olduqda cavab: a1=15
}