/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman()
{
    llint n, ps = 0, ns = 0, f = 0;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
        if (vi > 0)
        {
            ps += vi;
        }
        else
        {
            ns += vi;
        }
        if (vi == 1)
        {
            f++;
        }
    }
    if (ps != 0 && ns != 0)
    {
        for (llint i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                cout << ns / __gcd(ns, ps) << " ";
            }
            else
            {
                cout << -1 * (ps / __gcd(ns, ps)) << " ";
            }
        }
        cout << "\n";

        return;
    }
    if (f > 0)
    {
        f = 0;
        for (llint i = 0; i < n; i++)
        {
            if (v[i] != 1 || f == 1)
            {
                cout << "1 ";
            }
            else
            {
                cout << -1 * (ps - 1) << " ";
                f = 1;
            }
        }
        cout << "\n";
        return;
    }
    if (ns == 0 || ps == 0)
    {
        if (ps > 0)
        {
            for (llint i = 0; i < n - 1; i++)
            {
                cout << v[v.size() - 1] << " ";
            }
            cout << -1 * (ps - v[v.size() - 1]) << "\n";
        }
        else
        {
            for (llint i = 0; i < n - 1; i++)
            {
                cout << v[v.size() - 1] << " ";
            }
            cout << -1 * (ns - v[v.size() - 1]) << "\n";
        }
    }
}
int main()
{
    fast;
    llint t = 1, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}