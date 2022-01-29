#include <stdio.h>

int main()
{
    int c1 = 10;
    int a1;

    if (c1 == 10)
    {
        a1 = ++c1 + c1++;
        //a1 = 11 + 11 = 22
        a1 += ++c1 + c1++;
        //a1 = a1 + ++c1 + c1++
        //a1 = 22 + 13 + 13 = 48
    }
    else
    {
        a1 = ++c1;
    }

    printf("%d", a1);
    //c1 = 10 olduqda cavab: a1 = 48
    //c1 = 11 olduqda cavab: a1=12

    return 0;
}