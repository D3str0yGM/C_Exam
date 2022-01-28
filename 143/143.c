#include <stdio.h>

void main()
{

    int k3 = 20;
    int b3 = k3-- + --k3;

    printf("%d", b3); //cavab: 38
}