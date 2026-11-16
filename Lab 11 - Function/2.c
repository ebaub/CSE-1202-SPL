#include <stdio.h>
#include <math.h>

double area_of_circle(double r);

int main()
{
    double r;
    scanf("%lf",&r);
    double ans = area_of_circle(r);
    printf("Area of circle: %0.2lf\n",ans);
    return 0;
}

double area_of_circle(double r) {
    return M_PI*r*r; 
}