#include <stdio.h>

int main()
{
    int i;
    int num;
    scanf("%d",&num);
    int fac = 1;
    for (i = 1; i <= num; i++)
    {
        fac *= i;
    }
    printf("Factorial is %d\n", fac);

    return 0;
}