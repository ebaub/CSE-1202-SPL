#include <stdio.h>

int main()
{
    int i,temp;
    int sum = 0;
    for (i = 1; i <= 3; i++)
    {
        scanf("%d",&temp);
        sum += temp;
    }
    
    printf("Sum is %d\n", sum);

    return 0;
}