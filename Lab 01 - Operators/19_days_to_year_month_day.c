#include <stdio.h>

int main()
{
    int days;
    scanf("%d",&days);
    int month,year;
    year = days / 365;
    days %= 365;
    month = days / 30;
    days %= 30;

    printf("%d years %d months %d days\n",year,month,days);
    return 0;
}