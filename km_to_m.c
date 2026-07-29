#include <stdio.h>

int main()
{
    double km;
    printf("Enter value in kilometer: ");
    scanf("%lf",&km);
    printf("Value in meter: %0.2lfm\n",km*1000);
    return 0;
}