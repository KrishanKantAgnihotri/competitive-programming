#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long int sum = 0;
    long long int ans = 0;
    for (int i = 0; i < n; i++)
        sum += v[i], ans = max(ans, sum);
    cout << ans << endl;
}