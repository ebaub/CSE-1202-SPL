#include <stdio.h>

int main()
{
    int mark;
    scanf("%d", &mark);
    if (mark >= 60)
    {
        printf("FIRST DIV\n");
    }
    else if(mark>=50 && mark<=59) {
        printf("SECOND DIV\n");
    }
    else if(mark>=40 && mark<=49) {
        printf("THIRD DIV\n");
    }
    else {
        printf("FAILED\n");
    }

    return 0;
}