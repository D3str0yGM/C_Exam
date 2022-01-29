#include <stdio.h>

int main()
{

    int i = 10;
    int i1 = i--;
    //i-- olduğu zaman bir sonraki sətrdə i-nin dəyərini azaldır ona görədə i1 = 10

    printf("%d", i1); //cavab: 10

    return 0;
}