/* Average Number

Chef had a sequence of positive integers with length N + KN+K.
He managed to calculate the arithmetic average of all elements of this sequence (let's denote it by VV), 
but then, his little brother deleted KK elements from it. All deleted elements had the same value.

Chef still knows the remaining NN elements — a sequence A_1, A_2,..., A_NA
1,A2,…,AN.

Help him with restoring the original sequence by finding the value of the deleted elements or deciding that
there is some mistake and the described scenario is impossible.

Note that the if it is possible for the deleted elements to have the same value, 
then it can be proven that it is unique. Also note that this value must be a positive integer.

Input
- The first line of the input contains a single integer TT denoting the number of test cases. 
  The description of TT test cases follows.
- The first line of each test case contains three space-separated integers NN, KK and VV.
- The second line contains NN space-separated integers A_1, A_2, \ldots, A_NA
  1,A2,…,AN.

Output
- For each test case, print a single line containing one integer — the value of the deleted elements, 
  or -1−1 if there is a mistake. 
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,v,x,ans,sum;
	cin >> t;
	while(t--){
	    
	    cin >> n >> k >> v;
	    int arr[n];
	    sum = 0;
	    
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        sum = sum + arr[i];
	    }
	    
	    ans = v*(n+k)-sum;
	    
	    if(ans%k != 0 || ans <= 0)
	        cout << "-1" <<endl;
	    else 
	        cout << ans/k <<endl;
	    
	}
	return 0;
}
