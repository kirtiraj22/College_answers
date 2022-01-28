#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90){
        printf("Entered character is CAPITAL");
    }
    else if(ch>=97 && ch<=122){
    printf("Entered character is SMALL");
    }
    else if(ch>=48 && ch <=57){
        printf("Entered character is NUMBER");
    }
    else{
        printf("Entered character is a SPECIAL CHARACTER");
    }
    return 0;
}


