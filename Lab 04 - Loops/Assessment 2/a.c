#include <stdio.h>

int main()
{
    int i;
    char j;

    for(i=1; i<=4; i++) {
        for(j='A'; j<='E'; j++) {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}