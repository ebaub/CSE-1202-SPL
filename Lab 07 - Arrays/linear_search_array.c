// Array linear search

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); //  number of elements
    int a[n];

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); // taking input of each array index
    }

    int target;
    scanf("%d", &target);

    // flag
    int not_found = 1;

    for (i = 0; i < n; i++)
    {
        if (target == a[i])
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