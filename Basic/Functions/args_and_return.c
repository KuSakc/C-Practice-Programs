#include <stdio.h>
#include <conio.h>

int sum(int, int);

int main ()
{    
    int a, b, s;

    printf("First Digit: ");scanf("%d", &a);
    printf("Second Digit: ");scanf("%d", &b);

    s = sum(a, b);
    
    printf("Sum is %d", sum);

    return 0;
}

int sum(int a, int b)
{
    return a+b;
}