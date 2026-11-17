#include <stdio.h>


// User-defined function
void swap(int a, int b);
void swap_addrs(int* a, int* b);

int main() 
{
    int x,y;
    scanf("%d%d",&x,&y);
    swap(x,y); // call by value
    printf("Main: %d %d\n",x,y);
    swap_addrs(&x,&y); // call by reference

    // library function or Built-in function
    printf("after swap: %d %d\n",x,y);
    return 0;
}

void swap_addrs(int* a, int* b)
{
    int tmp = *a; // 5
    *a = *b;  // 12
    *b = tmp; // 5

    printf("swap_addrs: %d %d\n",*a,*b);
}



void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("swap: %d %d\n",a,b);
}