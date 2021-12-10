//program to print reverse number 

#include <iostream>
using namespace std;

int main()
{
    int n,rem;
    cout << "Enter a number:";
    cin >> n;
    while(n > 0){
        rem = n%10;
        n = n/10;
        cout << rem;
    }
    return 0;
}
