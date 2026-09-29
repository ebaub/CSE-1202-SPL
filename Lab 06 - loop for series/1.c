/*
fibonacci series: 1 1 2 3 5 8 ...

input: till what? 5
*/

#include <stdio.h>
int main()
{
    int a = 1, b = 1;
    int c;

    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        if (i == 1)
        {
            printf("1 ");
            continue;
        }
        if (i == 2)
        {
            printf("1 ");
            continue;
        }

        c = a+b;
        printf("%d ",c);  
        a=b; 
        b=c; 
    }
}