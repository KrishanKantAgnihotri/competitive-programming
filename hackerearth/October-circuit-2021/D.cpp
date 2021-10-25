#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll q;
        cin >> q;
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            l--, r--;
            string tmp = "";
            ll cnt = 0;
            for (int i = l; i <= r; i++)
            {
                tmp += s[i];
            }
            vector<int> v(r - l + 1);
            for (int i = 0; i < (r - l + 1); i++)
            {
                v[i] = i;
            }
            string sm = tmp;
            sort(sm.begin(), sm.end());
            do
            {
                string two = "";
                for (int i = 0; i < v.size(); i++)
                {
                    two += tmp[v[i]];
                }
                if (two == sm)
                    cnt++;
            } while (next_permutation(v.begin(), v.end()));
            cout << cnt << endl;
        }
    }
}