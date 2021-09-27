#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumDifference(vector<int> &v)
    {
        int n = v.size();
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] > v[i])
                    ans = max(ans, v[j] - v[i]);
            }
        }
        return ans;
    }
};