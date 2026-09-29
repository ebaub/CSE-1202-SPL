/*
2, 4, 8, 16, 32, 64, 128, 256
2^1, 2^2, 2^3, 2^4, 2^5
1  2  3  4    5 ....
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i;

    int input;
    scanf("%d", &input);

    for (i = 1; i <= input; i++)
    {
        printf("%0.0lf ",pow(2.0,(double)i));
    }
}