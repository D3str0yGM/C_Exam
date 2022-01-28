#include <stdio.h>

void main()
{

    int k4 = 10;
    int b4 = --k4 + --k4;

    printf("%d", b4); //cavab: 16
}