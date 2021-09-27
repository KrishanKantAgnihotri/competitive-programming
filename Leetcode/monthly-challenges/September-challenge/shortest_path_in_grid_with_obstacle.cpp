#include <bits/stdc++.h>
using namespace std;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
class Solution
{
public:
    int shortestPath(vector<vector<int>> &grid, int k)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, pair<int, int>>> q;
        q.push({0, {0, 0}});
        int cnt = 0;

        while (q.size())
        {
            int t = q.size();
            for (int i = 0; i < t; i++)
            {
                int a = q.front().second.first;
                int b = q.front().second.second;
                int c = q.front().first;
                q.pop();
                if (grid[a][b] == -1)
                    continue;
                if (a == n - 1 && b == m - 1)
                {
                    // cout<<c<<endl;
                    return cnt;
                }
                grid[a][b] = -1;

                for (int j = 0; j < 4; j++)
                {
                    int xx = dx[j] + a;
                    int yy = dy[j] + b;
                    int tmp = c;
                    if (xx >= 0 && yy >= 0 && xx < n && yy < m)
                    {
                        if (grid[xx][yy] == 1)
                        {
                            tmp++;
                        }
                        if (tmp > k)
                            continue;
                        if (grid[xx][yy] == -1)
                            continue;
                        // cout<<xx<<" "<<yy<<" "<<tmp<<endl;
                        q.push({tmp, {xx, yy}});
                    }
                }
            }
            cnt++;
        }
        return -1;
    }
};