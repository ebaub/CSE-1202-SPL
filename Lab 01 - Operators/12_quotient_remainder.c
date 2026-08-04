#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    int quotient = a/b;
    int remainder = a%b;
    printf("%d %d\n",quotient,remainder);
    return 0;
}