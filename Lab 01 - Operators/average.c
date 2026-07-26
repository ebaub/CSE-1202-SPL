#include <stdio.h>

int main()
{
    double a,b,c,average;
    printf("Enter three numbers to get their average: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    average = (a+b+c)/3;
    printf("Average: %0.2lf\n",average);
    return 0;
}