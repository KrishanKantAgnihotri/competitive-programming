#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution
{
public:
    int minOperations(vector<vector<int>> &grid, int x)
    {
        vector<int> v;
        int n = grid.size();
        int m = grid[0].size();
        if (grid[0].size() == 1 && grid.size() == 1)
        {
            return 0;
        }
        bool ok = true;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] % x != grid[0][0] % x)
                {
                    return -1;
                }
                v.push_back(grid[i][j] / x);
            }
        }
        sort(v.begin(), v.end());
        ll mid = v[n * m / 2];

        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ll diff = abs(mid - v[i]);
            ans += (diff);
        }

        if (ok)
            return ans;
        return -1;
    }
};