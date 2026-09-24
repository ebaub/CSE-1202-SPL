#include <stdio.h>

int main()
{
    int i;
    char j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 'E'; j >= 'E'-i+1; j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
