#include <bits/stdc++.h>
#define ll long long int

using namespace std;

struct query
{
    ll l;
    ll r;
    ll x;
};

int main()
{

    ll p;
    cin >> p;

    vector<query> queries(p);

    set<ll> st;

    for (ll i = 0; i < p; i++)
    {
        cin >> queries[i].l >> queries[i].r >> queries[i].x;
        st.insert(queries[i].l);
        st.insert(queries[i].r + 1);
    }

    vector<ll> index;
    map<ll, ll> id;
    ll cnt = 0;
    for (auto it : st)
    {
        index.push_back(it);
        id[it] = cnt;
        cnt++;
    }

    vector<ll> arr(cnt, 0);

    for (int i = 0; i < p; i++)
    {
        ll leftId = id[queries[i].l];
        ll rightId = id[queries[i].r + 1];
        arr[leftId] += queries[i].x;
        arr[rightId] -= queries[i].x;
    }

    vector<ll> prefix(cnt, 0);
    prefix[0] = arr[0];
    for (int i = 1; i < cnt; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    ll q;
    cin >> q;

    ll minIndex = index[0];
    ll maxIndex = index[cnt - 1];
    while (q--)
    {
        ll k;
        cin >> k;
        ll ans;
        if (k > maxIndex || k < minIndex)
        {
            ans = 0;
        }
        else
        {
            ll leftIndex = 0;
            for (ll i = 0; i < cnt; i++)
            {
                if (index[i] <= k)
                {
                    leftIndex = i;
                }
                else
                    break;
            }
            ans = prefix[leftIndex];
        }
        cout << ans << '\n';
    }

    return 0;
}
//Solution for Bonus Task
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;
    ll i, j;
    map<ll, ll> a;
    for (i = 0; i < n; i++)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        a[l] += x;
        a[r + 1] -= x;
    }
    ll s = 0;
    vector<ll> b, c;
    b.push_back(0);
    c.push_back(0);
    for (auto i : a)
    {
        s = s + i.second;
        b.push_back(i.first);
        c.push_back(s);
    }

    ll k;
    cin >> k;
    while (k--)
    {
        ll x;
        cin >> x;
        if (x > b.back())
            cout << 0 << '\n';
        else
        {
            ll l = lower_bound(b.begin(), b.end(), x) - b.begin();
            l--;
            if (binary_search(b.begin(), b.end(), x))
                l++;
            cout << c[l] << '\n';
        }
    }
}