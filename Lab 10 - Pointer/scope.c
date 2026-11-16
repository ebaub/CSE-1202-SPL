#include <stdio.h>

// void swap(int* a, int* b)
// {
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

int myname()
{
 printf("Mehedi, resmi, Sanzida");
}

int main()
{
    int x=5,y=10;
    // swap(&x,&y); // call by reference
    myname();
    // printf("%d %d",x,y); // call by value
}