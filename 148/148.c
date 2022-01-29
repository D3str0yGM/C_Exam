#include <stdio.h>
#include <math.h>

int main()
{
    float x = 2;

    printf("x=%10.2f\n", x);

    /*
        burdan çıxan output x = 2.00 olur 
        sualda soruşur ki kəsir hissənin çap olunan rəqəmlərinin sayı neçəyə bərabərdir
        cavab 2 olur çünki %10.2f verilib şərtdə bu o deməkdir ki kəsr hissə nə qədər uzun olur olsun 
        print olanda ilk iki ədəd görsənəcək.
    */

    return 0;
}