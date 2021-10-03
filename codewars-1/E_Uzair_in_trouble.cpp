#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s, f;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> f;
        vec.push_back({s, +1});
        vec.push_back({f, -1});
    }
    sort(vec.begin(), vec.end());
    int cnt = 0; // number of overlapping classes/intervals
    int ans = 0; // max. no. of overlapping classes/intervals
    int sz = vec.size();

    for (int i = 0; i < sz; i++)
    {
        cnt = cnt + vec[i].second;
        ans = max(ans, cnt);
    }
    cout << ans - 1 << '\n';
    return 0;
}