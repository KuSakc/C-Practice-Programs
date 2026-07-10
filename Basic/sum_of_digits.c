#include <stdio.h>

int main()
{
    int v,p;

    int n,f=0;
    printf("Number: ");scanf("%d", &n);

    while (n!=0)
    {
        p= n;
        n = n/10;
        f += p - (n*10);
    }

    printf("Sum of Numbers is %d", f);

    return 0;
}