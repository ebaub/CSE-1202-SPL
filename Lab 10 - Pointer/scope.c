#include <stdio.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int x=5,y=10;
    swap(&x,&y); // call by reference
    printf("%d %d",x,y); // call by value
}