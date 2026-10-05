/*
            1 5 11 19 29 ....
term:       1 2  3 4   5 
difference: 4 6  8 10 12
*/


#include <stdio.h>

int main() {
    int diff = 4;
    int i,n,input;
    scanf("%d",&input);
    n=1;
    for(i=1;i<=input;i++) {
        printf("%d ",n);
        n+=diff;
        diff+=2;
    }

}