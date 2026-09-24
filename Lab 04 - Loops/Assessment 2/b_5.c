#include <stdio.h>

int main()
{
    int i;
    int j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
/*
i=A  --- E D C B A
i=B  --- E D C B 
i=C  --- E D C
i=D
i=E




*/