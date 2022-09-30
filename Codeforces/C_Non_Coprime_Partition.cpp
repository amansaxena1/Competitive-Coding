/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
void aman()
{
    llint n, os = 0, es = 0;
    cin >> n;
    vector<llint> o, e;
    for (llint i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            os += i;
            o.pb(i);
        }
        else
        {
            es += i;
            e.pb(i);
        }
    }
    if (__gcd(os, es) == 1)
    {
        cout << "No\n";
        return;
    }
    cout << "Yes\n";
    cout << o.size() << " ";
    for (llint i = 0; i < o.size(); i++)
    {
        cout << o[i] << " ";
    }
    cout << "\n";
    cout << e.size() << " ";
    for (llint i = 0; i < e.size(); i++)
    {
        cout << e[i] << " ";
    }
}
int main()
{
    fast;
    llint t = 1, n, a;
    while (t--)
    {
        aman();
    }
    return 0;
}