#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumMoves(string s)
    {
        int n = s.length();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            if (s[i] == 'O')
                continue;
            for (int j = 0; (j < 3) && (j + i < n); j++)
            {
                if (s[i + j] == 'X')
                {
                    ok = true;
                    s[i + j] = 'O';
                }
            }
            if (ok)
                cnt++;
        }
        return cnt;
    }
};