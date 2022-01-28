#include <stdio.h>

void main()
{

    int k3 = 10;
    int b3 = k3++ + ++k3;

    printf("%d", b3); //cavab: 22
}