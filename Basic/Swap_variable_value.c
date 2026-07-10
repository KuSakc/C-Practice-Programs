#include <stdio.h>

int main()
{
    int a,b;

    printf("Value of A: ");scanf("%d",&a);
    printf("Value of B: ");scanf("%d",&b);

    a= a+b;
    b= a-b;
    a= a-b;

    printf("Value of A is %d",a);
    printf("Value of B is %d",b);

    return 0;
}