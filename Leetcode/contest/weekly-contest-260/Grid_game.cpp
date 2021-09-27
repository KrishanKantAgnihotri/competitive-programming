#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long gridGame(vector<vector<int>> &grid)
    {
        int n = 2;
        int m = grid[0].size() + 3;
        vector<long long> pref(m);
        vector<long long> suff(m);
        m -= 3;
        pref[1] = grid[1][0];
        suff[m] = grid[0][m - 1];
        for (int i = 2; i <= m; i++)
        {
            pref[i] += pref[i - 1];
            pref[i] += grid[1][i - 1];
        }
        for (int i = m - 1; i >= 1; i--)
        {
            suff[i] += suff[i + 1];
            suff[i] += grid[0][i - 1];
        }
        bool ok = false;
        long long ans = 1e18;
        int c = -1;
        for (int i = 1; i <= m; i++)
        {
            if (ans > max(pref[i - 1], suff[i + 1]))
            {
                ans = max(pref[i - 1], suff[i + 1]);
                c = i;
                ok = true;
            }
        }
        // cout<<c<<" ";
        if (ok)
            return ans;
        return -1;
    }
};