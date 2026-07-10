#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, sum;

    printf("First Number:  ");scanf("%d", &num1);
    printf("Second Number: ");scanf("%d", &num2);
    
    sum = num1 + num2; 

    printf("Sum of %d and %d is %d", num1, num2, sum);

    return 0;
}