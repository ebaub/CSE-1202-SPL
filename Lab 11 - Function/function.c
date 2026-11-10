#include <stdio.h>

// function declaration 
void calculateSum();
int calculateSum1();
void calculateSum2(int x, int y);
int calculateSum3(int x, int y);

int main()
{
    calculateSum();
    int x = calculateSum1(); // call the function
    printf("%d\n", x);
    calculateSum2(10);
    int y = calculateSum3(7, 8);
    printf("%d\n", y);

    return 0;
}

// no input, no return
void calculateSum()
{
    int x = 5;
    int y = 10;
    int sum = x + y;
    printf("The sum of x + y is: %d\n", sum);
}

// no input, returns value
int calculateSum1()
{
    int x = 5;
    int y = 10;
    int sum = x + y;
    return sum;
}

// takes input, no return
void calculateSum2(int x, int y)
{
    int sum = x + y;
    printf("The sum of x + y is: %d\n", sum);
}

// takes input, return value
int calculateSum3(int x, int y)
{
    int sum = x + y;
    return sum;
}
