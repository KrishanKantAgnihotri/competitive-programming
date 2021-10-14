         
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long
#define ii pair<int,int>
#define vii vector<ii>
#define vi vector<int>
#define vl vector<ll>
#define mii map<int,int>
#define uii unordered_map<int,int>
#define all(x) x.begin(),x.end()
#define ff first
#define fr(i,a,b) for(int i= a ;i<=b ;i++)
#define ss second
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define INF 1e18
#define lcm(a,b) a*b/__gcd(a,b)
#define print(x) cout<<x<<"\n";
#define scanv(v,n) for(int i  = 0 ; i<n ;i++ ) cin>>v[i];
#define printv(v) for(auto it : v) cout<<it<<" ";
#define rall(v) v.rbegin(),v.rend()
#define GOOGLE(i) cout<<"Case"<<" #"<<i<<": ";
#define Time cerr<<"\nTime Taken : "<<(float)(clock()-time_p)/CLOCKS_PER_SEC<<"\n";
clock_t time_p=clock();

int main()
{
   #ifndef ONLINE_JUDGE
    freopen("inputa.txt","r",stdin);
    freopen("outputa.txt","w",stdout);
    freopen("log.txt","w",stderr);
    #endif
int t;
t = 1;
cin>>t;
while(t--){
	ll n,k;
	cin>>n>>k;
	queue<ll> q;
	ll m = n-1 ;
	vector<vector<ll>> adj(n+1,vector<ll>());
	vector<ll> in(n+1); 
	while(m--){
		ll u,v;
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
		in[v]++;
		in[u]++;
	}
	for(int i = 1 ; i<=n ;i++){
		if(in[i] <= 1) q.push(i);
	}
bool vis[n+1];
ll ans = n;
memset(vis,false,sizeof(vis));

	while(q.size()){
		ll m = q.size();
		// cout<<m<<" ";
		if(k == 0) break;
		k--;
		for(int i = 0 ; i<m ;i++){
		 ll u = q.front();
		 q.pop();
		 if(vis[u]) continue;
		ans--;
		
		vis[u] = true;
		for(auto child : adj[u]){
			if(vis[child]) continue;
			in[child]--;
			if(in[child]<=1){
				q.push(child);
			}
		}
	}
	}
	// ans-=q.size();
	cout<<ans<<endl;
}
Time
}
