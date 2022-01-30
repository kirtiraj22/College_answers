#include <stdio.h>
#include <stdlib.h>

int add(int n);

int add(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("The sum of first %d terms is %d",n,sum);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    add(n);
}

