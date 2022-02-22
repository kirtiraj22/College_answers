#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20],ch;
    int i,j,flag=1,len;
    printf("Enter a String: ");
    gets(str);
    printf("Enter character to be deleted: ");
    scanf("%c",&ch);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==ch){
            for(j=i;j<len;j++){
                str[j]=str[j+1];
            }
            i++;
        }
    }
    printf("New string is: ");
    puts(str);
}
