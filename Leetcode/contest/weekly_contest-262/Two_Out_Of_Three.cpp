#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoOutOfThree(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3)
    {
        vector<int> ans;
        set<int> s;
        for (int i = 0; i < nums1.size(); i++)
        {

            for (int j = 0; j < nums2.size(); j++)
            {
                for (int k = 0; k < nums3.size(); k++)
                {
                    if (nums1[i] == nums2[j] || nums2[j] == nums3[k])
                    {
                        s.insert(nums2[j]);
                    }
                    else if (nums1[i] == nums3[k])
                    {
                        s.insert(nums1[i]);
                    }
                }
            }
        }
        for (auto it : s)
            ans.push_back(it);
        return ans;
    }
};
