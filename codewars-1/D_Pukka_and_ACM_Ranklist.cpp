//Author : Krishan Kant Agnihotri
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define endl "\n"
#define scanv(v, n)             \
    for (int i = 0; i < n; i++) \
        cin >> v[i];
const long long int MOD = 998244353;
int main()
{
    fast_io
        ll n;
    cin >> n;
    vl v(n);
    scanv(v, n);
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        v[i] = ((v[i] * (v[i] + 1LL)) / 2LL) % MOD;
    }
    for (int i = 0; i < n; i++)
    {
        ans = (ans * v[i]) % MOD;
    }
    cout << ans << endl;
}