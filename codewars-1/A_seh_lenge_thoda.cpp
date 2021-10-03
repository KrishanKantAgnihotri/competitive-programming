#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> v2[i];
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + v[i] * v2[i];
    }
    cout << ans << endl;
    return 0;
}