#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define all(x) x.begin(), x.end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl "\n"
#define scanv(v, n)             \
    for (int i = 0; i < n; i++) \
        cin >> v[i];

int main()
{
    fast_io

        ll n;
    cin >> n;
    ll k;
    cin >> k;
    vl v(n);
    scanv(v, n);
    ll mx = *max_element(all(v));
    ll mn = *min_element(all(v));
    cout << mx - mn << endl;
}