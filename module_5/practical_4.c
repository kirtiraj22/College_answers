#include <stdio.h>
#include <stdlib.h>

int CheckPrime(int a);
int CheckPerfect(int b);
int CheckArmstrong(int c);


int CheckArmstrong(int c){
    int temp,sum=0,i;
    temp = c;
    while(temp>0){
        i=temp%10;
        sum=sum+(i*i*i);
        temp=temp/10;
    }
    if(sum==c){
        printf("Number is armstrong\n");
    }
    else{
        printf("number is not armstrong\n");
    }
}

int CheckPerfect(int b){
    int sum=0,i;
    for(i=1;i<b;i++){
        if(b%i==0){
            sum=sum+i;
            }
        }
    if(sum==b){
        printf("number is perfect\n");
    }
    else{
        printf("number is not perfect\n");
    }

}

int CheckPrime(int a){
    int i,ans;
    for(i=2;i<a;i++){
        if(a%i==0){
            ans=0;
            break;
        }
        else{
            ans=1;
        }
    }
    if(ans==1){
        printf("Number is Prime\n");
    }
    else{
        printf("Number is Not Prime\n");
    }
}



int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    CheckArmstrong(n);
    CheckPerfect(n);
    CheckPrime(n);
}


