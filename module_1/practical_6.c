#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,m,cm,feet,inch;
    printf("Enter distance in KM : ");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100000;
    inch = km*39370.1;
    feet=km*3280.84;
    printf("distance in METER is %.3f\n",m);
    printf("distance in CENTIMETER is %.3f\n",cm);
    printf("distance in INCHES is %.3f\n",inch);
    printf("distance in FEET is %.3f\n",feet);
    return 0;
}


