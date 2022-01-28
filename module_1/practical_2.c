#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,height,area;
    printf("Enter base of triangle: ");
    scanf("%d",&base);
    printf("Enter height of triangle: ");
    scanf("%d",&height);

    area=0.5*base*height;
    printf("Area of triangle is : %d",area);
    return 0;
}
