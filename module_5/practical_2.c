#include <stdio.h>
#include <stdlib.h>

int checkprime(int n);

int checkprime(int n){
            int i,ans;
            for(i=2;i<n;i++){
                if(n%i==0){
                    ans=0;
                    break;
                }
                else{
                    ans=1;
                }
        }
        printf("%d",ans);
        //turn ans;
    }

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    checkprime(n);
}

