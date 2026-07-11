#include <stdio.h>
#include <conio.h>

void sum(int, int);

int main ()
{
    int a, b;

    printf("First Digit: ");scanf("%d", &a);
    printf("Second Digit: ");scanf("%d", &b);

    sum(a, b);
    return 0;
}

void sum(int a, int b)
{
    int sum_ = a+b;
    printf("Sum is %d", sum_);
}