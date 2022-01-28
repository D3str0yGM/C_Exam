#include <stdio.h>
#include <math.h>

void main()
{
    float x = 0;
    float y;

    while (x <= 3.14)
    {
        y = 5 * cos(x);
        x += 3.14 / 5;
    }

    printf("x=%10.3f\ny=%10.3f", x, y);

    /*
        cavab: 
        x = 3.140
        y = -4.041
    */
}