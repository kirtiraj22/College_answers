#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,flag=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The given number is NOT PRIME");
    }
    else{
        printf("The given number is PRIME");
    }
    return 0;
}


