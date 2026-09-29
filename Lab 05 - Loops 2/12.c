#include <stdio.h>

int main()
{
    int i, j;
    int toggle = 1;
    int row;
    scanf("%d",&row);

    for (i = 1; i <= row; i++)
    {
        toggle = (i&1)?1:0;

        for (j = 1; j <= i; j++)
        {
            printf("%d ", toggle);
            toggle = (toggle == 0) ? 1 : 0;
        }
        printf("\n");
    }
    return 0;
}
