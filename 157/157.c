#include <stdio.h>

int main()
{
    float a = 11, b = 19, c = 17, d = 15;

    if (a > b)
    {
        d = a;
    }
    else if (b < c)
    {
        d = b;
    }

    printf("%f", d);
    //cavab: 15.000000

    return 0;
}