#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxLength(vector<string> &arr)
    {
        int n = arr.size();
        string fans = "";
        for (int i = 0; i < (1 << n); i++)
        {
            string ans = "";
            for (int j = 0; j < n; j++)
            {
                if ((1 << j) & i)
                {
                    ans += arr[j];
                }
            }
            set<char> s;
            if (ans.length() > 26)
                continue;
            for (int i = 0; i < ans.length(); i++)
            {
                s.insert(ans[i]);
            }
            if (ans.size() == s.size())
            {
                if (fans.size() < ans.size())
                    fans = ans;
                if (fans.size() == ans.size())
                    fans = max(fans, ans);
            }
        }
        return fans.length();
    }
};