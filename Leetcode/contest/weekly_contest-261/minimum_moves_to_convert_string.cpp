#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> missingRolls(vector<int> &v, int me, int n)
    {
        int m = v.size();
        vector<int> ans;
        int tot = me * (n + m);
        int sm = 0;
        for (int i = 0; i < m; i++)
        {
            sm += v[i];
        }
        tot -= sm;
        if (tot < n || tot > 6 * n)
            return ans;

        int av = tot / n;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(max(av, 1));
            tot -= max(av, 1);
        }
        int i = 0;
        while (tot > 0)
        {
            int val = (min(6 - ans[i], tot));
            tot -= val;
            ans[i] += val;
            i++;
        }

        return ans;
    }
};