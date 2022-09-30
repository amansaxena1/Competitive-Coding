/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint unsigned long long int
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
    llint n, a, k;
    vector<llint> v;
    cin >> n >> k;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(all(v));
    // for (llint i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    if (k == 0)
    {
        if (v[0] - 1 < 1)
        {
            cout << "-1";
        }
        else
        {
            cout << v[0] - 1;
        }
    }
    else if (n == 1)
    {
        cout << v[0];
    }
    else
    {
        if (v[k] == v[k - 1])
        {
            cout << "-1";
        }
        else
        {
            cout << v[k - 1];
        }
    }
}
int main()
{
    fast;
    llint t = 1, n, a;
    // cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}