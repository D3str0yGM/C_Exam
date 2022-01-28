#include <stdio.h>

void main()
{
    float a = 11, b = 9, c = 17, d = 15;

    if (a > b)
    {
        if (a > c)
        {
            d = a;
        }
    }
    else if (b < c)
    {
        d = b;
    }

    printf("%f", d);
    //cavab: 15.000000
}