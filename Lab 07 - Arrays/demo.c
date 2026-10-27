//  skip negative values, but stop the loop completely if we find a zero:


#include <stdio.h>

int main()
{
    int num[] = {10,20,-5,-10,-20,0,650};
    int len = sizeof(num)/sizeof(num[0]);
    int i;
    for(i=0; i<len; i++) {
        if(num[i] <0) {
            continue;
        }
        if(num[i] == 0) {
            break;
        }
        printf("%d ",num[i]);
    }
}

