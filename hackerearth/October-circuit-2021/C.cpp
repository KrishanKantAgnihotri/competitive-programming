#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, m;
    cin >> k >> n >> m;
    int x;
    for (int i = 0; i < k; i++)
        cin >> x;
    int d;
    for (int i = 0; i < k; i++)
        cin >> x;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> d;
    }
    vector<int> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(i);
    }
    for (int i = 0; i < 100; i++)
    {
        random_shuffle(ans.begin(), ans.end());
    }
    for (auto it : ans)
        cout << it << " ";
}