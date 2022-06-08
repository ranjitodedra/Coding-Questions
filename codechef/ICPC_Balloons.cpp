/*ICPC Balloons
Chef is participating in an ICPC regional contest, in which there is a total of N problems 
(numbered 1 through N) with varying difficulties. For each valid i, the i-th easiest problem 
is problem Ai.

After a team solves a problem, a balloon with a colour representing that problem is tied next to 
their desk. Chef is fond of colours in VIBGYOR, which are representative of the problems with numbers 
1 through 7. The remaining problems have their own representative colours too.

Find the minimum number of problems which Chef's team needs to solve in order to get all the balloons
for problems 1 through 7 (and possibly some other balloons too) tied next to their desk, if you know
that Chef's team knows the difficulties of all problems and solves the problems in increasing order 
of difficulty.

Input
- The first line of the input contains a single integer T denoting the number of test cases. 
  The description of T test cases follows.
- The first line of each test case contains a single integer N.
- The second line contains N space-separated integers A1,A2,…,AN.

Output
- For each test case, print a single line containing one integer ― the minimum number of problems Chef's team needs to solve.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,n,i;
	cin >> t;
	while(t--){
	    cin >> n;
	    int arr[n];
	    
	    for(int j=0; j < n;j++){
	        cin >> arr[j];
	    }
	
	   // for(int j=0; j < n;j++){
	   //    cout << arr[j] << " ";
	   // }
	   // cout << endl;
	    
	    
	    x = 7;
	    i = 0;
	    while(x>0){
	        if(arr[i] == 1 || arr[i] == 2||arr[i] == 3||arr[i] == 4||arr[i] == 5||arr[i] == 6||arr[i] == 7)
	        {
	            x--;
	        }
	        i++;
	    }
	    cout << i << endl;
	}
	return 0;
}