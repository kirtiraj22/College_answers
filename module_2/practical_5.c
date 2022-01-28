#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic,da,hra,pf,ma,gross,net;
    printf("Enter your basic: ");
    scanf("%f",&basic);
    da=0.1*basic;
    hra=0.075*basic;
    pf=0.125*basic;
    ma=300;
    gross=basic+da+hra+ma;
    net=gross-pf;
    printf("Da=%.2f\n",da);
    printf("hra=%.2f\n",hra);
    printf("pf=%.2f\n",pf);
    printf("ma=%.2f\n",ma);
    printf("gross=%.2f\n",gross);
    printf("net=%.2f\n",net);

    return 0;
}


