#include <stdio.h>

int main()
{
    printf("Calculator\n");
    int x,y;
    x = 10, y = 5;
    printf("%d + %d = %d\n",x,y,x+y);
    printf("%d - %d = %d\n",x,y,x-y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d / %d = %d\n",x,y,x/y);
    printf("%d %% %d = %d\n",x,y,x%y);
    return 0;
}
