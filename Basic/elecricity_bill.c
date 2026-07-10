#include <stdio.h>

int main()
{
    float unit, rate;

    printf("Unit: "); scanf("%f",&unit);

    if (unit < 100) { rate = 1.5;}
    else if ( unit>=100  && 200<unit) { rate = 2.5;}
    else if ( unit>=200  && 500<unit) { rate = 3.5;}
    else { rate = 5.5;}

    float bill_amount = unit*rate;

    printf("Billamount is %F", bill_amount);

    return 0;
}