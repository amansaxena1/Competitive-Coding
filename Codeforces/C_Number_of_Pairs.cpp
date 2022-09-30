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
    llint n, l, r, vi;
    vector<llint> v;
    cin >> n >> l >> r;
    for (llint i = 0; i < n; i++)
    {
        cin >> vi;
        if (vi < r)
        {
            v.pb(vi);
        }
    }
    sort(all(v));
    llint a = 0, b = v.size() - 1;
    llint c = 0;
    while (a < b && b < v.size())
    {
        if (v[a] + v[b] <= r)
        {
            c += (b - a);
            a++;
        }
        else
            b--;
    }

    a = 0, b = v.size() - 1;
    llint d = 0;
    while (a < b && b < v.size())
    {
        if (v[a] + v[b] < l)
        {
            d += (b - a);
            a++;
        }
        else
            b--;
    }
    cout << c - d << "\n";
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