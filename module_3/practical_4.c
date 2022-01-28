#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,first_digit,last_digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    last_digit=n%10;
    while(n>0){
        first_digit=n%10;
        n=n/10;
    }
    sum=first_digit+last_digit;
    printf("Sum of first and last digit is : %d",sum);
    return 0;
}


