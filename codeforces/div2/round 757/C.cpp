//Author : Krishan Kant Agnihotri
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

//ordered_set
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

//find_by_order(k)  returns iterator to kth element starting from 0;
//order_of_key(k) returns count of elements strictly smaller than k;
//erase,insert same as normal set
//define it as oset<int> s; or oset<pair<int,int>> s;

//bunch of pragmas
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma comment(linker, "/stack:200000000")
#pragma GCC target("sse,sse2,sse3,sse4,popcnt,abm,mmx,tune=native")

//#pragma Gcc target("avx2,fma,avx")
//(Uncomment when needed and be sure it not give TLE bcoz it requires time)
//#pragma GCC optimize "trapv"//to check integer overflow and gives RE.

//macros
#define ull unsigned long long int
#define ll long long
#define ii pair<int, int>
#define vii vector<ii>
#define vi vector<int>
#define vl vector<ll>
#define mii map<int, int>
#define uii unordered_map<int, int>
#define all(x) x.begin(), x.end()
#define ff first
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define ss second
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define INF 1e18
#define lcm(a, b) a *b / __gcd(a, b)
#define print(x) cout << x << "\n";
#define scanv(v, n)             \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
#define printv(v)     \
    for (auto it : v) \
        cout << it << " ";
#define rall(v) v.rbegin(), v.rend()
#define GOOGLE(i) cout << "Case" \
                       << " #" << i << ": ";
#define Time cerr << "\nTime Taken : " << (float)(clock() - time_p) / CLOCKS_PER_SEC << "\n";
clock_t time_p = clock();

//boost for big int
//#include<boost/multiprecision/cpp_int.hpp>
//uncoment for large int requirement
//using boost::multiprecision::cpp_int;

//forced_functions
void file_io()
{
    fast_io
#ifndef ONLINE_JUDGE
        freopen("inputa.txt", "r", stdin);
    freopen("outputa.txt", "w", stdout);
    freopen("log.txt", "w", stderr);
#endif
}

//safe_hash
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//use it with unordered_map<T,T,custom_hash> safe_map

//const
const long long int MOD = 1e9 + 7;
const long long int MOD2 = (119 << 23) + 1; //(119<<23)+1==998244353
//random
ll stoii(string s)
{
    ll ans = 0;
    for (auto it : s)
    {
        ll cur = it - '0';
        ans = ans * 10 + cur;
    }
    return ans;
}

//matrix stuff
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
//fast_expo + MOD
ll ipowM(ll base, ll exp, ll MOD)
{
    ll res = 1;
    while (exp > 0)
    {
        if (exp & 1)
            res = (res * base) % MOD;
        exp >>= 1;
        base = (base * base) % MOD;
    }
    return res;
}

bool test = true;
bool file = true;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll o = 0;
    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        ll x;
        cin >> x;
        o |= x;
    }
    ll ans = (o * (ipowM(2, n - 1, MOD))) % MOD;
    cout << ans << endl;
}
int main()
{
    if (file)
        file_io();
    int t;
    t = 1;
    if (test)
        cin >> t;
    while (t--)
    {
        solve();
    }
    Time
}
