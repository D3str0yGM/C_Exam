#include <stdio.h>
#include <math.h>

int main()
{
    float x = 2;

    printf("x=%12.7f\n", x);

    /*
        burdan çıxan output x = 2.0000000 olur 
        sualda soruşur ki rəqəmlərinin ümumi sayı neçəyə bərabərdir
        x-ın hansı rəqəm olduğunun fərqi yoxdu çünki bu halda nöqtədən sonra həmişə 7 rəqəm olacaq bir dənəsidə nöqtədən əvvəl
        ona görə 8 olur.
    */

    return 0;
}