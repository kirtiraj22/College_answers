#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    printf("The pri-unary for increment is %d\n",++a);
    printf("The postfix for increment is %d\n",a++);
    printf("The prefix for decrement is %d\n",--a);
    printf("The postfix for decrement is %d\n",a--);
    return 0;
}


