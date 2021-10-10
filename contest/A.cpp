#include<bits/stdc++.h>
using namespace std;
#define vl vector<ll>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define fr(a,b) for(int i = a ; i<b ;i++)
#define ff first
#define ss second
#define ull unsigned long long int
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define INF 1e18
#define Time cerr<<"\nTime Taken : "<<(float)(clock()-time_p)/CLOCKS_PER_SEC<<"\n";
clock_t time_p=clock();
const long long int MOD = 1e9+7;
int main(){
    fast_io
    #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
      //meet in middle technique
     // is used when brute is not applied then we use this technique
     // algo
     // (1) split set into two subsets
     //(2) find all possible subsets sum of given set say X and for other say Y
     //(3) if we check naively then our complexity still is O(2^(n/2)*(2^(n/2)) that is same as brute :(
     //   so what we do is sort one of the X or Y and binary search for the value.
     //   this reduce are complexity O(2^(n/2)*log(2^(n/2))) which is roughly O(2^(n/2)*n) which will work for n == 40
//(Q) find maximum sum subset smaller than some element X
int n;
cin>>n;
ll x;
vector<ll> v(n);
for(ll i  = 0 ; i<n ;i ++){
    cin>>v[i];
}
cin>>x;
ll tota = 1LL<<(n/2LL);
ll totb = 1LL<<(n-n/2LL);
vector<ll> a;//subset sum for 1st half
vector<ll> b;//subset sum for 2nd half
for(ll i = 0 ; i<tota ;i++){
    ll sum = 0 ;
    for(ll j = 0 ; j<n/2 ; j++){
        //cout<<v[j]<<" ";
       if(i&(1LL<<j))
        sum+=v[j];
    }
    //cout<<endl;
    a.push_back(sum);
}
for(ll i = 0 ; i<totb ;i++){
    ll sum = 0 ;
    for(ll j = 0; j<(n-n/2) ; j++){
       if(i&(1LL<<j))
        sum+=v[j+n/2];
    }
    b.push_back(sum);
}
sort(b.begin(),b.end());//sorting for binary_searching
ll ans  = -1 ;
//cout<<a.size()<<" "<<b.size()<<endl;
for(ll i = 0 ; i<a.size();i++){
    //cout<<a[i]<<" ";
    ll ele = a[i];
    if(ele>x)
        continue;
   ll fi = x - ele;
   auto itr = lower_bound(b.begin(),b.end(),fi);
   if(itr==b.end() ||(*itr)!=fi )
    itr--;
     ans = max(ans,ele+(*itr));
     //cout<<ans<<" ";
}
cout<<ans<<endl;
}