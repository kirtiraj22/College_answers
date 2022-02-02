#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr[15],j;
    for(i=0;i<10;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(j=0;j<10;j++){
        if(arr[j]%2==0){
            printf("%d is even\n",arr[j]);
        }
        else{
            printf("%d is odd\n",arr[j]);
        }
    }
    return 0;
}
