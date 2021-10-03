#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxConsecutiveAnswers(string s, int k)
    {
        int chng = 0;
        queue<int> st;
        int cur = 0;
        int ans = 0;
        int last = 0;
        queue<int> q;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            cur++;
            if (s[i] == 'F')
            {
                q.push(i);
                chng++;
            }

            if (chng > k)
            {

                cur = i - q.front();
                chng--;
                q.pop();
            }
            ans = max(ans, cur);
        }
        queue<int> q2;
        cur = 0;
        chng = 0;
        for (int i = 0; i < n; i++)
        {
            cur++;
            if (s[i] == 'T')
            {
                q2.push(i);
                chng++;
            }

            if (chng > k)
            {

                cur = i - q2.front();
                chng--;
                q2.pop();
            }
            ans = max(ans, cur);
        }
        return ans;
    }
};