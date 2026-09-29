/*
(1^2) + (1^2 + 3^2) + (1^2 + 3^2 + 5^2)
1            2               3
*/

#include <stdio.h>

int main()
{
    int i, j;
    int n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int base = 1;
        printf("(");
        for (j = 1; j <= i; j++)
        {
            printf("%d^2", base);
            base += 2;
            if (j < i)
            {
                printf(" + ");
            }
        }
        printf(")");
        if (i < n)
        {
            printf(" + ");
        }
    }
}