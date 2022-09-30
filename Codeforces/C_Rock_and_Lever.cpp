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
    llint n;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    llint ans = 0, cnt = 1;
    // for (llint i = 1; i < n; i++)
    // {
    //     if (v[i] == v[i - 1])
    //     {
    //         cnt++
    //     }
    //     if (v[i] != v[i - 1])
    //     {
    //         if (cnt > 1)
    //         {
    //             ans += (cnt * (cnt - 1)) / 2;
    //         }
    //         cnt = 1;
    //     }
    // }
    vector<llint> u;
    for (llint i = 0; i < n; i++)
    {
        u.pb(log2(v[i]));
    }
    sort(all(u));
    for (llint i = 1; i < n; i++)
    {
        if (u[i] == u[i - 1])
        {
            cnt++;
        }
        else if (u[i] != u[i - 1])
        {
            if (cnt > 1)
            {
                ans += (cnt * (cnt - 1)) / 2;
            }
            cnt = 1;
        }
    }
    if (cnt != 1)
    {
        ans += (cnt * (cnt - 1)) / 2;
    }
    cout << ans << "\n";
    // cout << "and" << (13 & 7) << "\n"; //     1 3 4 7 10
    // cout << "xor" << (13 ^ 7) << "\n";
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