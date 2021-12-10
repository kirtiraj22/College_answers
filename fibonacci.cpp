//program to print fibonacci series
#include <iostream>

using namespace std;

int main()
{
    int n,a,b,count,c;
    cout << "Enter a number:";
    cin >> n;
    a = 0;       //initialize a = 0 (first element)
    b = 1;       //initialize b as 1 (second element)
    count = 0;   //initialize count as 0
    while(count <=n){
        c = b;    //assigning b's value to c
        b = b + a;   //adding two numbers according to fibonacci series
        a = c;   
        count++;
        cout << a << " ";
    }
    return 0;
}
