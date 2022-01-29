#include <stdio.h>

int main()
{
    int c1 = 21;
    int a1;

    if (c1 == 21)
    {
        a1 = c1--;
        //a1 = 21
        a1 = a1 / ++c1;
        //a1 = 21 / 21 = 1
    }
    else
    {
        a1 = ++c1 + c1++;
        //a1 = 11 + 11 = 22
        a1 += ++c1 + c1++;
        //a1 = a1 + ++c1 + c1++
        //a1 = 22 + 13 + 13 = 48
    }

    printf("%d", a1);
    //c1 = 21 olduqda cavab: a1 = 1
    //c1 = 10 olduqda cavab: a1=48

    return 0;
}