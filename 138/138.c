#include <stdio.h>

void main()
{

    int k2 = 0;
    int b2 = ++k2 + k2++;

    printf("%d", b2); //cavab: 3
}