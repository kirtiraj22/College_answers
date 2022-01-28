#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,max,i;
    max=0;
    for(i=0;i<10;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&a);

        if(a>max){
            max=a;
        }
    }
    printf("\nThe MAXIMUM number is %d\n",max);
    return 0;
}


