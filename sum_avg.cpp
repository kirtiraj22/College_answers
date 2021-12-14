#include <iostream>
using namespace std;

int main(){
    int T,a;
    float avg;
    int sum =0;
    cout <<"Enter the number of inputs:";
    cin >> T;
    int x = T;    //temporary variable to store T's value
    while (T--){
        cout << "Enter number:";
        cin >> a;
        sum = sum + a;
    }
    avg = sum/x;
    cout << "sum is "<< sum<<endl;
    cout << "average is " <<avg;
    return 0;
}
