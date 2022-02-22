#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20],ch,a;
    int i,flag=1;
    printf("Enter a String: ");
    gets(str);
    printf("Enter character to be replaced: ");
    scanf("%c",&ch);
    printf("Enter new character: ");
    scanf(" %c",&a);

    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            str[i]=a;
        }
    }
    printf("string after replacing is : ");
    puts(str);
}
