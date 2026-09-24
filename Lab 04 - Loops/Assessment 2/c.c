#include <stdio.h>

int main()
{
    int i;
    int j;

    for (i = 1; i <= 5; i++)
    {

        char ch = 'E';
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%c ", ch--);
        }
        printf("\n");
    }
    return 0;
}
