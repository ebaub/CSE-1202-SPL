#include <stdio.h>

int main()
{
    int i;
    char j;
    int row = 5;

    for(i=1; i<=row; i++) {
        for(j='E'; j>='E'-row+i; j--) {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}

/*
ROW = 5

J = 'E' 


*/