#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number & 1)
    {
        printf("%d is an odd number\n", number);
    }
    else
    {
        printf("%d is an even number\n", number);
    }
    return 0;
}