#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20],ch;
    int i,flag=1;
    printf("Enter a String: ");
    gets(str);
    printf("Enter character to be searched: ");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++){
        if (str[i]==ch){
            flag=0;
            break;
        }
    }
    if(flag==0){
        printf("Element found at position %d",i+1);
    }
    else{
        printf("Element not found!");
    }
}
