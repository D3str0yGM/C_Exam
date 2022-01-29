#include <stdio.h>

int main()
{
    int c1 = 10;
    int a1;

    if (c1 == 10)
    {
        a1 = ++c1;
        //a1 = 11
        a1 *= c1--;
        //a1 = 11 * 11 = 121
    }
    else
    {
        a1 = ++c1 + c1++;
        //a1 = 12 + 12 = 24
        a1 += ++c1 + c1++;
        //a1 = a1 + ++c1 + c1++
        //a1 = 24 + 14 + 14 = 52
    }

    printf("%d", a1);
    //c1 = 10 olduqda cavab: a1 = 121
    //c1 = 11 olduqda cavab: a1=52

    return 0;
}