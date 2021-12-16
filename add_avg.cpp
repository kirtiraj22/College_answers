#include <iostream>

using namespace std;

int main()
{
    float t,x,a,b,avg;
    cout << "Enter number of inputs:";
    cin >> t;
    cout << "Enter numbers:";
    x = t;
    int sum = 0;
    while (t--)
    {
            cin >> a;
            sum = sum + a;
    }
    cout << "sum is:"  << sum << endl;
    avg = float (sum / x);
    cout << "average is:" << avg;
    return 0;
}
