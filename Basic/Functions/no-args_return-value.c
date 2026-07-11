#include <stdio.h>
#include <conio.h>

int sum();

int main ()
{
    int s = sum();
    
    printf("Sum is %d", sum);

    return 0;
}

int sum()
{
    int a, b, sum;

    printf("First Digit: ");scanf("%d", &a);
    printf("Second Digit: ");scanf("%d", &b);

    return a+b;
}