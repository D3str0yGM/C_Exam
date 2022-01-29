#include <stdio.h>

int main()
{
    int c1 = 6;
    int d1 = 1;
    int a1;
    int c2;

    if (c1 - d1 == 5)
    {
        c1 += 5;
        a1 = d1;

        printf("%d\n", c1);
        printf("%d", a1);
        //c1 = 6, d1 = 1 olduqda cavab: c1 = 11, a1 = 1
    }
    else
    {
        c1 = d1 + 2;
        c2 = d1 + 2;

        printf("%d\n", c1);
        printf("%d", c2);
        //c1 = 5, d1 = 1 olduqda cavab: c1 = 3, c2 = 3
    }

    return 0;
}