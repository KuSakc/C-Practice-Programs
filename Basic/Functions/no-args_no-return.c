#include <stdio.h>
#include <conio.h>

void sum();

int main ()
{
    sum();
    return 0;
}

void sum()
{
    int a, b, sum;

    printf("First Digit: ");scanf("%d", &a);
    printf("Second Digit: ");scanf("%d", &b);

    sum = a+b;

    printf("Sum is %d", sum);

}