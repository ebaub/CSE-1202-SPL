#include <stdio.h>

int main()
{
    int x = 5; // value save
    int q = x; // value save = 5
    int *p = &x; //*memory address save
    *p = 6;
    printf("value of x = %d and address of x = %p\n",x,&x);
    printf("value of q = %d and address of p = %p\n",q,p);

}