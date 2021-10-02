#include<bits/stdc++.h>
using namespace std; 
class Solution {
public:
  
    
    int longestCommonSubsequence(string a, string b) {
       
         int n=a.length();
         int m= b.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1));
        for(int i= 0 ; i<n ;i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                if(a[i]==b[j])
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                    
                }
                else
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
            }
        }
        return dp[n][m];
    }
};