#include <stdio.h>

int main()
{

    int k2 = 10;
    int b2 = --k2 + k2--;
    //b2 = 9 + 9 = 18

    printf("%d", b2); //cavab: 18

    return 0;
}