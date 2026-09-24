#include <stdio.h>

int main()
{
    char i;
    char j;

    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = 'E'; j >= i; j--)
        {
            printf("%c ", j);
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