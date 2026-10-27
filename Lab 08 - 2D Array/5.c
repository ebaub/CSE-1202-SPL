#include <stdio.h>
#include <limits.h>

int main()
{
    int myArray[5][5];

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d",&myArray[i][j]);
        }
    }

    int biggest = INT_MIN;

    for(int i=0; i<5; i++) {
        if(myArray[i][i] > biggest) { // 00, 11, 22, 33, 44
            biggest = myArray[i][i];
        }

    }

    printf("Biggest number in diagonal is: %d\n",biggest);


}