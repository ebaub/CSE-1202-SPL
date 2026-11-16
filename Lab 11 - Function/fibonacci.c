#include <stdio.h>

int fibonacci(int n);

int main()
{
    int n;
    scanf("%d",&n); // 5

}

// 1 1 2 3 5 8 ... 

int fibonacci(int n)
{
    if(n==0 || n==1) return 1;

    return fibonacci(n-1)+fibonacci(n-2);
}