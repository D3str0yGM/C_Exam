#include <stdio.h>

int main()
{
    int c1 = 13;
    int a1;

    if (c1 == 13)
    {
        a1 = ++c1 - c1++;
        //a1 = 14 - 14 = 0;
    }
    else
    {
        a1 = ++c1;
    }

    printf("%d", a1);
    //c1 = 13 olduqda cavab: a1 = 0
    //c1 = 14 olduqda cavab: a1=15

    return 0;
}