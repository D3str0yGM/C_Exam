#include <stdio.h>

int main()
{

    int b2 = 0;
    int k2 = ++b2 + b2++;
    //y = 1 + 1 = 2

    printf("%d\n", k2); //cavab: 2

    return 0;
}