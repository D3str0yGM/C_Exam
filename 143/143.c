#include <stdio.h>

int main()
{

    int k3 = 20;
    int b3 = k3-- + --k3;
    //b3 = 20 + 18 = 38

    printf("%d", b3); //cavab: 38

    return 0;
}