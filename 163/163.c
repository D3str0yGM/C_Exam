#include <stdio.h>

int main()
{
    int x = 10, a = 13, b = 12, c = 19, y;

    x += 10;

    switch (x)
    {
    case 20:
        y = 5 * a;
        break;
    case 10:
        y = b;
        break;
    case 15:
        y = 6 * a;
        break;
    default:
        y = a + b - c;
        break;
    }

    printf("%d", y);
    //cavab: 65

    return 0;
}