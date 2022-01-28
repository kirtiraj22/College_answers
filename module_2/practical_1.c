#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("Enter Number:");
    scanf("%d",&n1);
    if(n1>0){
        printf("%d is POSITIVE",n1);
    }
    else if(n1<0){
        printf("%d is NEGATIVE",n1);
    }
    else{
        printf("%d is ZERO",n1);
    }
    return 0;
}


