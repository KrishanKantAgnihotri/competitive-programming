#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];
    int dp[m][m + 1];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = B[0] * A[n - 1];
    dp[0][1] = B[0] * A[0];
    for (int i = 1; i < m; i++)
    {
        dp[i][0] = dp[i - 1][0] + B[i] * A[n - i - 1];
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = max(dp[i - 1][j] + B[i] * A[n - (i - j) - 1], dp[i - 1][j - 1] + B[i] * A[j - 1]);
        }
        dp[i][i + 1] = dp[i - 1][i] + B[i] * A[i];
    }
    int ans = INT_MIN;
    for (int f = 0; f <= m; f++)
        ans = max(ans, dp[m - 1][f]);
    cout << ans << endl;
}
