#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,c,n,count=2;
    printf("Enter the number of terms to be displayed: ");
    scanf("%d",&n);
    printf("Fibonacci series of %d terms is : \n",n);
    printf("%d %d ",a,b);
    while(count<n){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        count++;
    }
    return 0;
}


