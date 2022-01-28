#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,r,i,t;
    printf("Enter Principal value: ");
    scanf("%f",&p);
    printf("Enter Rate of interest: ");
    scanf("%f",&r);
    printf("Enter time in Year: ");
    scanf("%f",&t);
    i=(p*r*t)*0.01;
    printf("Simple interest is %.2f",i);
    return 0;
}
