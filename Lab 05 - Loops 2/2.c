#include <stdio.h>

/*
i=1, 1<=5 ---> j=1, j<=(5-1) = 4, space: 4 , j=1, j<=1 star: 1, \n
i=2, 2<=5 ---> j=1, j<+(5-2) = 3, space:3 , j=1, j<=2, star:2, \n

*/

int main()
{
    int i,j;
    for(i=1;i<=5;i++) {
        for(j=1;j<=5-i;j++) {
            printf(" ");
        }
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}