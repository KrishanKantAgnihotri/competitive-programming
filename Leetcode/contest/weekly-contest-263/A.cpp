#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool areNumbersAscending(string s)
    {
        int n = s.length();
        // cout<<s.length();
        int last = -1;
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
                continue;
            if (s[i] > '9' || s[i] < '0')
                continue;
            int cur = 0;
            while (s[i] <= '9' && s[i] >= '0')
            {
                cur = cur * 10 + (s[i] - '0');
                i++;
            }
            // cout<<cur<<" ";
            if (last >= cur)
                ok = false;
            last = cur;
        }
        return ok;
    }
};