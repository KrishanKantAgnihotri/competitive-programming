#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> k >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] %= k;
    }
    ll sum = 0;
    map<ll, ll> m;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        sum += v[i];
        sum %= k;
        if (sum == 0)
            ans = max(ans, i);
        if (!m[sum])
            m[sum] = i;
        else
        {
            ans = max(ans, (i - m[sum]));
        }
    }
    cout << ans << endl;
}
