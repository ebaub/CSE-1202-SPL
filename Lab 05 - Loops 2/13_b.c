#include <stdio.h>

int main()
{
    int i, j;
    int toggle = 1;

    for (i = 1; i <= 5; i++)
    {
        // even = starts with zero , odd = starts with one
        if (i & 1)
        {
            toggle = 1;
        }
        else
        {
            toggle = 0;
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", toggle);
            if (toggle == 0)
            {
                toggle = 1;
            }
            else
            {
                toggle = 0;
            }
        }
        printf("\n");
    }
    return 0;
}