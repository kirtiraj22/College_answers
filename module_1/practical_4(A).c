//without using third variable
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1,num2;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    printf("Numbers before replacing are %d %d\n\n",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Numbers after replacing are %d %d\n",num1,num2);
    return 0;
}


