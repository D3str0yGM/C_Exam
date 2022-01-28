#include <stdio.h>

void main()
{

    int k1 = 0;
    int b1 = k1++ + k1++;

    printf("%d", b1); //cavab: 1
}