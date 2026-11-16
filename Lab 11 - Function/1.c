#include <stdio.h>

int square(int a);

int main()
{
    int x;
    scanf("%d",&x);
    int ans = square(x);
    printf("Square: %d\n",ans);

    return 0;
}

int square(int a) {
    return a*a; 
}