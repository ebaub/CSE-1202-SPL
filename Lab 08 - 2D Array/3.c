#include <stdio.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int myArray[r][c];

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d",&myArray[i][j]);
        }
    }
    printf("\n");
    
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            printf("%d ",myArray[i][j]*10);
        }
        printf("\n");
    }
    return 0;
}