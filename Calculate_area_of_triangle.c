#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b,c,s;
    float area;

    printf("Value of side A: ");scanf("%d",&a);
    printf("Value of side B: ");scanf("%d",&b);
    printf("Value of side C: ");scanf("%d",&c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle is %f", area);

    return 0;
}