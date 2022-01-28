#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum=0,i;
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + 1/i;
    }
    printf("Sum of %d numbers is %.2f",n,sum);
    return 0;
}


