#include <iostream>
using namespace std;

int main(){
    int n,a,b,first_digit,sum;
    cout << "Enter a number:";
    cin >> n;
    a = n%10;   //to get the last number

    while(n>=10){
        n = n/10;
    }
    first_digit = n;
    sum = first_digit + a;
    cout << "first digit is:" << n <<endl;
    cout << "Last digit is:" <<a<<endl;
    cout << "sum of first and last digit is:" <<sum;
    return 0;
}
