#include <stdio.h>

int main()
{
    int i, vowel_count=0;
    int *pointer;

    int name = "Tribhuwan University";
    pointer = name;

    for (i=0; i<strlen(name); i++)
    {
        switch (*(pointer+i))
        {
        case "a":
            vowel_count++;
            break;
        
        default:
            break;
        }
    }

    return 0;
}