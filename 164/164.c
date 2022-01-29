#include <stdio.h>

int main()
{
    int x = 20, a = 13, b = 12, c = 19, y;

    x /= 5;

    switch (x)
    {
    case 20:
        y = 5 * a;
        break;
    case 4:
        y = b;
        break;
    case 5:
        y = 6 * a;
        break;
    default:
        y = (a - b) * c;
        break;
    }

    printf("%d", y);
    //cavab: 12

    return 0;
}