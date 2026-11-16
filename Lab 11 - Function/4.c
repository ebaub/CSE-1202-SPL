#include <stdio.h>

void sum_average(int n);

int main()
{
    int n;
    scanf("%d",&n);
    sum_average(n);
    return 0;
}

void sum_average(int n)
{
    int i;
    int sum=0;
    int counter=0;
    for(i=1;i<=n; i+=2) {
        sum+=i;
        counter++;
    }
    printf("Sum: %d\n",sum);
    printf("Average: %0.2lf\n",sum/counter*1.0);
}