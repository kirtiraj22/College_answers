//program to evaluate series 1^2+2^2+3^2+4^2+.....+n^2
#include <iostream>

using namespace std;

int main()
{
    int n,sqr;
    cout << "Enter number:";
    cin >> n;
    int ans =0;

    for(int i =1;i<=n;i++)
    {
        if(i==n){
                sqr = i*i;
                ans = ans + sqr;
                cout << i <<"^2=";
        }
        else{
                sqr = i*i;
                ans = ans + sqr;
                cout << i <<"^2+";
        }
    }
    cout << ans;
    return 0;
}
