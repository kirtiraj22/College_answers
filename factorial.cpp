#include <iostream>

using namespace std;

int main()
{
    int n,fact;
    cout <<"Enter a number:";
    cin >> n;
    fact = 1;   //initialising factorial's value as 1
    for(int i = n;i > 0;i--){   //this will run until i = 1
        fact = fact * i;      //this will multiply every factorial output
    }
    cout << fact;
    return 0;
}
