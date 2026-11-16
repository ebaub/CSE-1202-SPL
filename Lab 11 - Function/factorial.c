#include <stdio.h>


int factorial(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int ans = factorial(n);
    printf("%d",ans);
    return 0;
}

int factorial(int n) {
    if(n==1) return 1; // terminating condition 

    return n*factorial(n-1);
    // recursive expression
}

// factorial ? 5! = 5*4*3*2*1