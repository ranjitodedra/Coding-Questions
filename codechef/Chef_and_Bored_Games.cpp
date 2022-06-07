/*

Chef has recently been playing a lot of chess in preparation for 
the ICCT (International Chef Chess Tournament).

Since putting in long hours is not an easy task, Chef's mind wanders elsewhere. 
He starts counting the number of squares with odd side length on his chessboard..

However, Chef is not satisfied. He wants to know the number of squares of odd side length 
on a generic N*N chessboard.

Input:
- The first line will contain a single integer T, the number of test cases.
- The next T lines will have a single integer N, the size of the chess board.

Output:
- For each test case, print a integer denoting the number of squares with odd length.

solution -> for length l number boxies = Math.pow((n-l+1),2); n-> size , l -> length.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,even,odd,count,ans;
	cin >> t;
	while(t--){
	    ans = 0;
	    count = 0;
	    even = 2;
	    odd = 1;
	    cin >> n;
	    
	    for(int index = 1; index <= n;index++){
	            if(index % 2 != 0){
	                count++;
	            }
	        }
	        
	    if(n%2 == 0) 
	    {
	        for(int index2 = 0;index2 < count ; index2++){
	            ans = ans + even*even;
	            even = even+2;
	        }
	    }
	    else
	    {
	        for(int index2 = 0;index2 < count ; index2++)
	        {
	            ans = ans + odd*odd;
	            odd = odd+2;
	        }
	    }
	    
	    cout << ans << endl;
	}
	return 0;
}
