#include <stdio.h>

void number_analysis(int num);


int main()
{
    int x;
    scanf("%d",&x);
    number_analysis(x);
    return 0;
}


void number_analysis(int num) {
    int digit = 0;
    int sum = 0;
    int reverse = 0;

    while(num) { // 1
        int rem = num%10; // 1
        digit++; // 3
        sum+=rem; // 14
        reverse = (reverse*10)+rem; // 851 
        num /= 10; // 1
    }

    printf("Digit: %d\n",digit);
    printf("Sum: %d\n",sum);
    printf("Reverse: %d\n",reverse);
}