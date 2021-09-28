#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool check(int a[],int b[]){
        for(int i = 0 ; i<26 ; i++){
            
            if(a[i]!=b[i]) {
            // cout<<a[i]<<" "<<b[i]<<endl;
            return false;
            }
        }
        return true;
    }
	int search(string b, string a) {
	    int k = b.length();
	    int n = a.length();
	    int freq[26]={0};
	    for(int i = 0 ; i<k ;i++){
	        freq[b[i]-'a']++;
	    }
	    int freq2[26]={0};
	    for(int i = 0 ; i<k ;i++){
	        freq2[a[i]-'a']++;
	    }
	    
	    int ans = 0 ; 
	    if(check(freq,freq2)) ans++;
	    for(int i = k ;i<n ;i++){
	        
	        freq2[a[i-k]-'a']--;
	        freq2[a[i]-'a']++;
	        if(check(freq,freq2)) ans++;
	    }
	    return ans;
	    
	}

};
int main(){
    int t;
    cin>>t;

    while(t--){
        string pat,txt;
        cin>>txt>>pat;
        Solution ob;
        auto ans = ob.search(pat,txt);
        cout<<ans<<endl;

    }
    return 0 ; 
}