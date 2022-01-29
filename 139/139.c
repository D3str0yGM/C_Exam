#include <stdio.h>

int main()
{

    int k3 = 10;
    int b3 = k3++ + ++k3;
    //b3 = 10 + 12 = 22

    printf("%d", b3); //cavab: 22

    return 0;
}