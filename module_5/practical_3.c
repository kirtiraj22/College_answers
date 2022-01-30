#include <stdio.h>
#include <stdlib.h>

int Exchange(int a,int b);

int Exchange(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after exchanging are %d %d\n",a,b);
}

int main(){
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("\nNumbers before exchanging are %d %d\n\n",a,b);
    Exchange(a,b);
}

