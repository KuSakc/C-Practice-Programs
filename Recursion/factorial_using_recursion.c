#include <stdio.h>
#include <conio.h>

int factorial(int);

int main()
{
    int number;

    printf("Number: ");scanf("%d", &number);

    int facto = factorial(number);

    printf("Factorail of %d is %d .", number, facto);

    return 0;
}

int factorial(int number)
{
    if ( number == 0 || number == 1 )
    {
        return number;
    }
    else
    {
        return number*factorial(number-1);
    }
}