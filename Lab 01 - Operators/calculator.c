#include <stdio.h>

int main()
{
    printf("Calculator\n");
    double x,y;
    printf("Enter two numbers: ");
    scanf("%lf%lf",&x,&y);
    
    printf("%0.2lf + %0.2lf = %0.2lf\n",x,y,x+y);
    printf("%0.2lf - %0.2lf = %0.2lf\n",x,y,x-y);
    printf("%0.2lf * %0.2lf = %0.2lf\n",x,y,x*y);
    printf("%0.2lf / %0.2lf = %0.2lf\n",x,y,x/y);
    printf("%0.2lf %% %0.2lf = %d\n",x,y,(int)x % (int)y); // type casting
    return 0;
}