#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numOfPairs(vector<string> &v, string target)
    {
        int cnt = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v.size(); j++)
            {
                if (i == j)
                    continue;
                string a = v[i];
                a += v[j];
                if (a == target)
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};