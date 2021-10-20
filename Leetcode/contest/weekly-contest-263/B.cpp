#include <bits/stdc++.h>
using namespace std;
class Bank
{
public:
    vector<long long> v;
    int n;
    Bank(vector<long long> &balance)
    {
        for (int i = 0; i < balance.size(); i++)
        {
            v.push_back(balance[i]);
        }
        n = v.size();
    }

    bool transfer(int i, int j, long long x)
    {
        i--;
        j--;
        if (i < 0 || i >= n || j < 0 || j >= n || v[i] < x)
            return false;
        v[i] -= x;
        v[j] += x;
        return true;
    }

    bool deposit(int i, long long x)
    {
        i--;
        if (i < 0 || i >= n)
            return false;
        v[i] += x;
        return true;
    }

    bool withdraw(int i, long long x)
    {
        i--;
        if (i < 0 || i >= n || v[i] < x)
            return false;
        v[i] -= x;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */