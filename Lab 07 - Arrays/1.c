#include <stdio.h>
#include <limits.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];

    int biggest = INT_MIN;


    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);

        if(arr[i] > biggest) {
            biggest = arr[i];
        }
    }

    printf("Biggest number: %d\n",biggest);

    return 0;

}