#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int i,len;
    printf("Enter a String: ");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("\nString in uppercase is: ");
    puts(str);
}
