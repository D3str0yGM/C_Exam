#include <stdio.h>

int main()
{
    int x = 3, a = 3, b = 2, c = 9, y = 300;

    switch (x)
    {
    case 2:
        y *= 2 * x;
        break;
    case 3:
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
    //cavab: 100

    return 0;
}