#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int tribonacci(int n)
    {
        long long int ans = 0;
        int a = 0;
        int b = 1;
        int c = 1;
        if (n <= 2)
        {
            return n ? 1 : 0;
        }
        n -= 2;
        int d;
        while (n--)
        {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return d;
    }
};