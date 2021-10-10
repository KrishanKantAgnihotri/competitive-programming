//Still giving wrong Answer though
//trying meet in middle.
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define INF 1e9
class Solution {
public:
    int search(vector<int> array, int start_idx, int end_idx, int search_val) {

   if( start_idx == end_idx )
      return (array[start_idx] <= search_val) ? start_idx : -1;

   int mid_idx = start_idx + (end_idx - start_idx) / 2;

   if( search_val < array[mid_idx] )
      return search( array, start_idx, mid_idx, search_val );

   int ret = search( array, mid_idx+1, end_idx, search_val );
   return ret == -1 ? mid_idx : ret;
}
    int minimumDifference(vector<int>& v) {
        ll n = v.size();
ll tota = 1LL<<(n/2LL);
ll totb = 1LL<<(n/2LL);
        vector<int> a;
        vector<int> b;
map<ll,ll> m;
        ll s = 0 ; 
        for(int i = 0 ; i<v.size() ;i++){
            s+=v[i];
        }
for(ll i = 0 ; i<tota ;i++){
    ll sum = 0 ;
    for(ll j = 0 ; j<n/2 ; j++){
        //cout<<v[j]<<" ";
       if(i&(1LL<<j))
        sum+=v[j];
    }
    //cout<<endl;
    a.push_back(sum);
    m[sum]++;
}
        ll ans = INF;
for(ll i = 0 ; i<totb ;i++){
    ll sum = 0 ;
    for(ll j = 0; j<(n/2) ; j++){
       if(i&(1LL<<j))
        sum+=v[j+n/2];
    }
    ll val = s/2-sum;
    ll f = search(a,0,n-1,val);
    if(f == -1) continue;
    
    // cout<<sum<<" "<<val<<" "<<(a[f]+sum)<<endl;
    ans = min(ans,abs(s-2LL*(a[f]+sum)));
}
// sort(b.begin(),b.end());//sorting for binary_searching
// ll ans  = INF ;
// //cout<<a.size()<<" "<<b.size()<<endl;
// for(ll i = 0 ; i<a.size();i++){
//     //cout<<a[i]<<" ";
//     ll ele = a[i];
//    auto itr = lower_bound(b.begin(),b.end(),ele);
//    if(itr==b.end() ||(*itr)!=ele)
//     itr--;
//     ll val = *itr;
    
//      ans = min(ans,abs(val-ele));
//      //cout<<ans<<" ";
// }
        cout<<endl;
return ans;
        
    }
};