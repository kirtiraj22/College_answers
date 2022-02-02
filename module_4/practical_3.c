#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j,arr[15];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nARRAY IS : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int max=arr[0];         //assume first element as maximum
    for(j=0;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("\n\nThe maximum element in array is %d",max);
    return 0;
}
