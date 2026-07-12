#include<stdio.h>

int main()
{
    int n, *point;
    int i, sum=0;

    printf("Array Length: "); scanf("%d", &n);

    int arr[n];
    point = arr;
    
    for (i=0; i<n; i++){ printf("Element %d:", i); scanf("%d" , point);}

    for (i=0; i<n; i++){sum += *(point+i);}

    printf("Sum of elements is %d", sum);
    return 0;
}