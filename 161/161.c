#include <stdio.h>

int main()
{
    int x = 4, a = 13, b = 12, c = 19, y = 100;

    switch (x)
    {
    case 2:
        y *= 2 * x;
        break;
    case 4:
        y /= x;
        break;
    case 6:
        y += 6 * x;
        break;
    default:
        y = a + b - c;
        break;
    }

    printf("%d", y);
    //cavab: 25

    return 0;
}