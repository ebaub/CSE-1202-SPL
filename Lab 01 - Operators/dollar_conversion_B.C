#include <stdio.h>

int main()
{
    double BDT, USD;
    printf("Enter value in BDT: ");
    scanf("%lf", &BDT);
    USD = (int)(BDT / 77.5); // type casting
    BDT = BDT - (USD * 77.5);
    printf("%0.0lf USD and %0.2lf BDT\n", USD, BDT);

    return 0;
}