#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,percentage,s1,s2,s3,s4,s5;
    printf("Enter marks:\n");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    printf("Your total is : %.2f\n",total);
    percentage=(total/500)*100;
    printf("your percentage is %.2f\n",percentage);
    if(percentage>=80 && percentage <=100){
        printf("DISTINCTION");
    }
    else if(percentage>=60 && percentage <80){
        printf("FIRST CLASS");
    }
    else if(percentage>=40 && percentage <60){
        printf("SECOND CLASS");
    }
    else{
        printf("FAIL");
    }
    return 0;
}


