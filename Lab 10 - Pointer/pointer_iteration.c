#include <stdio.h>

int main()
{
    int array[] = {5,10,15,20};
    int* ptr = array;
    printf("%d",*(array+2));
}