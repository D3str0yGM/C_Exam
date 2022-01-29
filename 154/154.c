#include <stdio.h>

int main()
{
    int a = 5;
    int b = 9;
    int c = 6;
    int d = c;

    if (a > b)
    {
        if (a > c)
        {
            d = a;
        }
    }
    else if (b > c)
    {
        d = b;
    }

    printf("%d", d);
    //cavab: 9
}