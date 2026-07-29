#include <stdio.h>

int main()
{
    double celsius,farenheit;
    printf("Enter value in celsius: ");
    scanf("%lf",&celsius);
    farenheit = ((9*celsius)/5)+32;
    printf("Value in Farenheit: %0.2lfF\n",farenheit);
    // printf("Value in Farenheit: %0.2lfF\n",((9*celsius)/5)+32);
    return 0;
}