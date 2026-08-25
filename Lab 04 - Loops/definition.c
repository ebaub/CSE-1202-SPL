#include <stdio.h>

int main()
{
    int i = 0;
    while (1)
    {
        i++;
        if (i == 6)
        {
            continue;
        }
        if (i == 11)
        {
            break;
        }
        printf("%d - Hello\n", i);
    }
    printf("World\n");
    return 0;
}