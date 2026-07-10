#include <stdio.h>

int sum(int arry[])
{
    int s = 0;
    for (int i = 0; i <=4; i++)
    {
        s += arry[i];
    }
    return s;
}

int main()
{
    int arry[5] = {1, 2, 3, 4, 5};

    int s;

    s =sum(arry);

    printf("Sum of array is %d\n", s);

    return 0;
}

