#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int c;
    printf("Before interchange: a=%d b=%d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("After interchange: a=%d b=%d\n",a,b);
    return 0;
}