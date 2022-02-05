#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nARRAY IS :\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }

    printf("\n\nSUM OF ARRAY IS %d\n\n",sum);
    return 0;
}
