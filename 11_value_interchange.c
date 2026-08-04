#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    printf("Before interchange: a=%d b=%d\n",a,b);
    a = a+b; // 15
    b = a-b; // 15-10 = 5
    a = a-b; // 15 - 5 = 10
    printf("After interchange: a=%d b=%d\n",a,b);
    return 0;
}