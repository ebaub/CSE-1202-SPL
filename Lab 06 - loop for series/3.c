/*
1, 4, 7, 10, …………… 40
1  2  3  4  ......  n

*/

#include <stdio.h>

int main() {
    int n=1;

    for(;;) {
        printf("%d ",n);
        if(n==40) 
        {
            break;
        }
        n = n+3;
    }

}