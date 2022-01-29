#include <stdio.h>

int main()
{

    int k1 = 0;
    int b1 = k1++ + k1++;
    //b1 = 0 + 1 = 1

    printf("%d", b1); //cavab: 1

    return 0;
}