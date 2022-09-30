#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define io ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
#define ve vector<long long int>
#define vp vector<pair<long long int, long long int>>
#define push push_back
#define mp make_pair
#define input               \
    for (i = 0; i < n; i++) \
    {                       \
        cin >> x;           \
        v.push_back(x);     \
    }
using namespace std;

void sneha()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, m;
        cin >> a >> b >> c >> m;
        ve v;
        v.push(a);
        v.push(b);
        v.push(c);
        sort(v.begin(), v.end(), greater<ll>());
        ll q;
        ll w = 0;
        q = max((v[0] - v[1] - v[2] - 1), w);
        ll r = max((v[0] - 1) + (v[1] - 1) + (v[2] - 1), q);
        if (m >= q && m <= r)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    io;
    sneha();
    return 0;
}