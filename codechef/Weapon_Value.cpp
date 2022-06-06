/*Weapon Value
A competition with NN participants (numbered 11 through NN) is taking place in Chefland. 
There are N-1N−1 rounds in the competition; in each round, two arbitrarily chosen contestants battle, 
one of them loses and drops out of the competition.

There are 1010 types of weapons (numbered 11 through 1010). 
You are given NN strings S_1, S_2, \ldots, S_N S1,S2,…,SN;for each valid ii and jj,
the j j-th character of S_iS i

​is '1' if the ii-th contestant initially has a weapon of type jj or '0' otherwise. 
During each battle, for each type jj such that both contestants in this battle currently have weapons 
of type jj, these weapons of both contestants are destroyed; after the battle, the winner collects all 
remaining (not destroyed) weapons of the loser. Note that each contestant may win or lose regardless of
the weapons he/she has.

Chef is feeling bored watching the contest, so he wants to find the maximum possible number of weapons 
the winner of the tournament could have after the last battle, regardless of which contestants fight in 
which battles or the results of the battles. Can you help him?

Input
- The first line of the input contains a single integer TT denoting the number of test cases. 
  he description of TT test cases follows.
- The first line of each test case contains a single integer NN.
- NN lines follow. For each valid ii, the ii-th of these lines contains a single string S_iS i.

Output
- For each test case, print a single line containing one integer ― the maximum number of weapons the winner could have. 

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,count;
	cin >> t;
	while(t--){
	    cin >> n;
	    string arr[n];
	    
	    for(int index2 = 0; index2 < n;index2++){
	        cin >> arr[index2];
	    }
	    
	    string sn = "0000000000";
	    
	    for(int i=0;i<n;i++)
	    {
	        
	       // cout << sn << " and " << arr[i] << endl;
	        for(int j=0;j<10;j++)
	        {
	           if(sn[j] == arr[i][j])
	            sn[j] = '0';
	           else
	            sn[j] = '1';
	        }
	       // cout << "sn = " <<sn<< endl;
	       
	    }
	    count = 0;
	    for(int index=0;index < 10;index++){
	        if(sn[index] == '1'){
	            count++;
	        }
	    }
	    
	    cout << count << endl;
	    
	}
	return 0;
}
