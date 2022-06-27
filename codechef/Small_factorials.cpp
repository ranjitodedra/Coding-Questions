/*
    Small factorials
    Problem Code:FCTRL2
*/

#include<iostream>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        cpp_int num = 1;
        for(int i=1;i<=n;i++)
            num = num * i;
        cout << num << endl;
    }
    return 0;
}

/* cpp_int
    Arbitrary Precision Data Type: We can use any precision with the help of the cpp_int data type
    if we are not sure about how much precision is needed in the future. It automatically converts
    the desired precision at the Run-time. 
*/