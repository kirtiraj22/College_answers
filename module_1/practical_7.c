#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Enter temperature in CENTIGRADE:");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("Temperature in FAHRENHEIT is %.3f",f);
    return 0;
}


