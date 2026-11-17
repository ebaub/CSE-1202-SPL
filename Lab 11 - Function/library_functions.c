#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double x=2, y=5, z=16, p=-27;
    double a=2.7, b=2.3, c=2.5;
    printf("square: %0.2lf\n",pow(x,y)); // x^y
    printf("square root: %0.2lf\n",sqrt(z));
    printf("cube root: %0.2lf\n",cbrt(p));
    printf("Floor: %0.2lf\n",floor(a));
    printf("Ceil: %0.2lf\n",ceil(a));
    printf("Round: %0.2lf\n",round(c));
    printf("|p|: %d\n",abs(p));
    printf("Pi: %0.12lf\n",M_PI);
    printf("Pi: %0.12lf\n",acos(-1));

    return 0;
}