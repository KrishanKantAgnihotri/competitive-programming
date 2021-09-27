#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(string s){
        int n = s.length();
        int i =0 ; 
        int j = n-1 ; 
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++,j--;
        }
        return true;
    }
    string breakPalindrome(string s) {
        int n = s.length();
        string ans(n,'z');
        bool ok = false;
        for(int i = 0 ;i <n ;i++){
            char c = s[i];
            for(int j = 0 ;j <26 ;j++){
                s[i] = char('a'+j);
                if(!check(s)){
                    ok = true;
                    ans = min(ans,s);
                }
                s[i] = c;
            }
            
        }
        if(ok)
        return ans;
        else 
            return "";
    }
};