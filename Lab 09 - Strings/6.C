#include <stdio.h>

int main()
{
    char str[100];
    scanf("%d", str);
    int i;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            str[i] = '#';
        }
        else
        {
            str[i] = '%';
        }
    }

    return 0;
}