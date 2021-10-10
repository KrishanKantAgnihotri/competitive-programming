#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class StockPrice {
public:
    set<pair<ll,ll>> s;
    map<ll,ll> m;
    int last;
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(m.count(timestamp)){
            pair<ll,ll> p1 = {m[timestamp],timestamp};
            s.erase(p1);
            m[timestamp]  = price;
            s.insert({price,timestamp});
        }
        else {
            m[timestamp] = price;
            s.insert({price,timestamp});
        }
        last = max(last,timestamp);
    }
    
    int current() {
         return m[last];
    }
    
    int maximum() {
        return m[(*s.rbegin()).second];
    }
    
    int minimum() {
        return m[(*s.begin()).second];
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */