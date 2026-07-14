#include<stdio.h>

int hcf(int, int);

int main()
{

    int number1, number2;

    printf("Number 1: ");scanf("%d", &number1);
    printf("Number 2: ");scanf("%d", &number2);

    printf("%d", hcf(number1, number2));

    return 0;
}

int hcf(int number1, int number2)
{
    if (number1 == 0)
    {
        return number1;
    }
    if (number2 == 0)
    {
        return number1;
        return hcf(number2, number1%number2);
    }
}
