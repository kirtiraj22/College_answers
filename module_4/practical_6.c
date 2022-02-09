#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int start=0,end=n-1,arr[n];
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("ARRAY Is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nARRAY AFTER REVERSE IS:\n");
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
