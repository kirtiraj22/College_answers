#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a;
    float avg,sum=0;
    printf("Enter number of inputs: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&a);
        sum = sum+a;
    }
    printf("The SUM is %f ",sum);
    avg=sum/n;
    printf("\nThe AVERAGE of this numbers is %.2f",avg);
    return 0;
}


