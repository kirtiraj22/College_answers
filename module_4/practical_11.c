#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20],ch,temp;
    int i,len,right,left;
    printf("Enter a String: ");
    gets(str);
    len=strlen(str);
    left=0;
    right=len-1;
    for(i=left;i<right;i++){
        temp=str[i];
        str[i]=str[right];
        str[right]=temp;
        right--;
    }
    printf("\nString after reversing is: ");
    puts(str);
}
