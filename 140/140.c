#include <stdio.h>

int main()
{

    int k4 = 0;
    int b4 = ++k4 + ++k4;
    //b4 = 1 + 2 = 3

    printf("%d", b4); //cavab: 3

    return 0;
}