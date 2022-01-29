#include <stdio.h>

int main()
{

    int k1 = 10;
    int b1 = k1-- + k1--;
    //b1 = 10 + 9 = 19  

    printf("%d", b1); //cavab: 19

    return 0;
}