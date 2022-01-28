#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Enter total terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + i*i;
    }
    printf("Sum of %d terms is %d",n,sum);
    return 0;
}


