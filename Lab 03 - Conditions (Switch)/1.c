/*
Calculate according to choice>:
Choice Result
1 Add
2 Subtract
3 Multiply
4 Divide
5 Remainder
*/

#include <stdio.h>

int main()
{
    double x,y;
    int operator; // + - * / %
    scanf("%lf %lf %d",&x,&y,&operator);
    switch(operator) {
        case 1:
            printf("%0.2lf + %0.2lf =  %0.2lf\n",x,y,x+y);
            break;
        case 2:
            printf("%0.2lf - %0.2lf =  %0.2lf\n",x,y,x-y);
            break;
        case 3:
            printf("%0.2lf * %0.2lf =  %0.2lf\n",x,y,x*y);
            break;
        case 4:
            printf("%0.2lf // %0.2lf =  %0.2lf\n",x,y,x/y);
            break;
        case 5:
            printf("%0.2lf %% %0.2lf =  %d\n",x,y,(int)x%(int)y);
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}