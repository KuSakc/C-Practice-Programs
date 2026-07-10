#include<stdio.h>
#include<conio.h>

int main()
{
    int number;

    printf("Number: ");scanf("%d", &number);

    printf("\n");
    for (int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", number, i, number*i);
    }

    return 0;
}