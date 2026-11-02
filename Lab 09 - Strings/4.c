// String linear search

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    scanf("%s",str);

    char target;
    scanf(" %c", &target); // EBAUB -> U

    // flag
    int not_found = 1;

    for (i = 0; str[i]; i++) // str[n] = null character = 0 , breaks loop
    {
        if (target == str[i])
        {
            printf("Value found at index %d\n", i);
            not_found = 0;
            break;
        }
    }

    if (not_found)
    {
        printf("Not Found!");
    }
    return 0;
}