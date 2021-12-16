//program to check whether the number is prime or not
#include <iostream>

using namespace std;

int main()
{
    int n,prime;
    cout << "Enter a number:";
    cin >> n;

    for (int i=2;i<=n;i++)
        {
            if (n%i!=0){
                cout << n << " is a Prime number";
                break;
            }
            else{
                cout << n <<" is not a Prime number";
                break;
            }
        }
    return 0;
}
