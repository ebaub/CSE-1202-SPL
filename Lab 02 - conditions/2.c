#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    if (number & 1)
    {
        printf("%d is an odd number\n", number*number*number);
    }
    else
    {
        printf("%d is an even number\n", number*number);
    }
    return 0;
}