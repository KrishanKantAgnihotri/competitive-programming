#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
    {
        vector<vector<int>> tmp;
        if (original.size() != (n * m))
            return tmp;
        vector<vector<int>> ans(m, vector<int>(n));
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = original[k];
                k++;
            }
        }
        return ans;
    }
};