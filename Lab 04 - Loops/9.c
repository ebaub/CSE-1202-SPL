#include <stdio.h>

int main()
{
    int i;
    int num;
    scanf("%d",&num);
    int sum = 0;
    while(1) {
        sum += (num%10);
        num /= 10;
        if(num == 0) {
            break;
        }
    }
    printf("Sum is %d\n", sum);

    return 0;
}