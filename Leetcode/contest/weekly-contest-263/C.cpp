#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution
{
public:
    int countMaxOrSubsets(vector<int> &v)
    {
        map<long long, long long> m;
        ll mx = 0;
        ll n = v.size();
        for (int i = 0; i < (1 << n); i++)
        {
            ll cur = 0;
            for (int j = 0; j < n; j++)
            {
                if ((1 << j) & i)
                {
                    cur |= v[j];
                }
            }
            m[cur]++;
            mx = max(mx, cur);
        }
        return m[mx];
    }
};