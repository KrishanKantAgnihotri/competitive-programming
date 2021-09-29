#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        stack<int> ev;
        stack<int> od;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2)
                od.push(nums[i]);
            else
                ev.push(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int ele = 0;
            if (i % 2)
            {
                ele = od.top();
                od.pop();
            }
            else
            {
                ele = ev.top();
                ev.pop();
            }
            ans.push_back(ele);
        }
        return ans;
    }
};