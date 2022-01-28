#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    printf("Enter number 3: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3){
        printf("%d is greatest",num1);
    }
    else if(num2>num3){
        printf("%d is greatest",num2);
    }
    else{
        printf("%d is greatest",num3);
    }
    return 0;
}



