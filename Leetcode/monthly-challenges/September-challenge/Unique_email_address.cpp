#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numUniqueEmails(vector<string>& s) {
        set<string> ans;
        for(int i =0 ; i<s.size() ;i++){
            string tmp ="";
            bool ok = true;
            bool flag = false;
            bool at = false;
            for(int j = 0 ; j<s[i].length() ;j++){
                if(s[i][j]=='.' && !at) continue;
                if(s[i][j] == '+' && !at){
                    flag = true;
                    continue;
                }
                if(s[i][j] == '@') {
                    at = true;
                    flag = false;
                    
                    tmp+=s[i][j];
                    continue;
                }
                if(flag){
                    continue;
                }
                tmp+=s[i][j];
            }
            cout<<tmp<<endl;
            if(tmp!="")
            ans.insert(tmp);
        }
        return ans.size();
    }
};