#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,last_digit;
    printf("Enter a number: ");
    scanf("%d",&num);

    last_digit=num%10;

    if(last_digit%2==0){
        printf("Last digit is EVEN");
    }
    else{
        printf("Last digit is ODD");
    }
    return 0;
}


