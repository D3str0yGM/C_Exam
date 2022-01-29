#include <stdio.h>

int main(int argc, const char *argv[])
{

    int x = 0;
    int y;
    y = ++x + x++;
    //y = 1 + 1 = 2

    printf("%d\n", y); //cavab: 2

    return 0;
}