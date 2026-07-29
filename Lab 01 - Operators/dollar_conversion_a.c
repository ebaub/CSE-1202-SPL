#include <stdio.h>

int main()
{
    int BDT,USD;
    printf("Enter value in BDT: ");
    scanf("%d",&BDT);
    USD = BDT / 77;
    BDT %= 77; // BDT = BDT % 77
    printf("%d USD and %d BDT\n",USD,BDT);
    return 0;
}