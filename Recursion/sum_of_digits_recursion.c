#include <stdio.h>

int sum(int);

int main()
{
    int n;
    printf("Number: ");scanf("%d", &n);

    int s = sum(n);

    printf("Sum of digits of number is %d", s);

    return 0;
}

int sum(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return (n%10)+sum(n/10);
    }
}