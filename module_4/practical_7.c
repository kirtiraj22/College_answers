#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,index;
    printf("enter number of elements to be entered:");
    scanf("%d",&n);
    printf("\n");
    int arr[20];
    for(i=0;i<n;i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n");
    printf("original array is :");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("enter index to be deleted:");
    scanf("%d",&index);
    printf("\n");
    for(i=index;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("\n");
    printf("array after deletion of element is:");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
        }
        printf("\n\n");

    return 0;
}
