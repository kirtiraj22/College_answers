#include <stdio.h>
#include <stdlib.h>

int main()
{
    float marks;
    printf("Enter your Marks:");
    scanf("%f",&marks);

    if(marks>33){
        printf("PASS");
    }
    else if (marks<33){
        printf("FAIL");
    }
    else{
        printf("ENTER VALID MARKS!");
    }
    return 0;
}


