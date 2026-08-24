/*
Calculate according to operator
2 + 2 
2 - 2 
*/

#include <stdio.h>

int main()
{
    double x,y;
    char operator; // + - * / %
    scanf("%lf %c %lf",&x,&operator,&y);
    switch(operator) {
        case '+':
            printf("%0.2lf %c %0.2lf =  %0.2lf\n",x,operator,y,x+y);
            break;
        case '-':
            printf("%0.2lf %c %0.2lf =  %0.2lf\n",x,operator,y,x-y);
            break;
        case '*':
            printf("%0.2lf %c %0.2lf =  %0.2lf\n",x,operator,y,x*y);
            break;
        case '/':
            printf("%0.2lf %c %0.2lf =  %0.2lf\n",x,operator,y,x/y);
            break;
        case '%':
            printf("%0.2lf %c %0.2lf =  %d\n",x,operator,y,(int)x%(int)y);
            break;
        default:
            printf("Invalid input\n");
    }
    return 0;
}