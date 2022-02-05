#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,n,flag=0,pos;
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


    printf("\n\n\nEnter element to be searched: ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(arr[i]==x){
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==1){
        printf("\nElement found at index %d\n",pos);
    }
    else{
        printf("\nElement not found!\n");
    }
    return 0;
}
