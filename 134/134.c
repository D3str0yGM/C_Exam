#include <stdio.h>

int main()
{

    int i = 7;
    int i1 = --i;
    //i1 = 6 olacaq çünki prefix olaraq azaldır ona görədə olduğu sətrdə azaldır.

    printf("%d", i1); //cavab: 6

    return 0;
}