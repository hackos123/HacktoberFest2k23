/*Problem link: gfg  https://practice.geeksforgeeks.org/problems/number-of-distinct-subsequences0909/1  
    here we find out total number of distict subsequence of an string, which were taken by user in main block,
    after this we call a function named distinctSubsequences passing that string
    and solve it as following way.
 */

#include<bits/stdc++.h>
using namespace std;

int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int n = s.size();
        int dp[n + 1];
        
        int mod = 1e9 + 7;
        dp[0] = 1;
        
        // Space : O(n)
        unordered_map <char, int> mp;
        
        // Time : O(n)
        for(int i = 1;i <= n;i++){
            
            dp[i] = (dp[i - 1] * 2) % mod;
            
            
            char c = s[i - 1];
            
            if(mp.find(c) != mp.end()){
                dp[i] = (dp[i] - dp[mp[c] - 1] + mod) % mod;
            }
            mp[c] = i;
        }
        
        return dp[n] % mod;
	}

int main(){
    string s;
    cin>>s;
    cout<<"number of sub string is "<<distinctSubsequences(s)<<endl;
    return 0;
}