#include <stdio.h>

int main()
{
    int i;
    int x, y;
    scanf("%d%d", &x, &y);
    int power = 1;
    for (i = 1; i <= y; i++)
    {
        power *= x;
    }
    printf("%d^%d = %d\n", x, y, power);

    return 0;
}