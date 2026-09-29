#include <stdio.h>

/*
i=1, 1<=5 ---> j=1, j<=(5-1) = 4, space: 4 , j=1, j<=1 star: 1, \n
i=2, 2<=5 ---> j=1, j<+(5-2) = 3, space:3 , j=1, j<=2, star:2, \n

*/

int main()
{
    int i,j;
    int row;
    scanf("%d",&row);
    for(i=1;i<=row;i++) {
        for(j=1;j<=row-i;j++) {
            printf(" ");
        }
        for(j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}