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
    llint n, a;
    vector<llint> v;
    cin >> n;
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
    // cout << "\n";
    a = -1;
    llint ans = 0, flag = 0;
    vector<llint> u;
    n = count(all(v), 0);
    if (n > 0)
    {
        ans += n;
        if (n > 1)
        {
            flag = 1;
        }
    }
    // cout << ans << "*";
    for (llint i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            ans++;
            u.pb(v[i]);
        }
        if (v[i] > 0 && flag != 1 && a != 1)
        {
            a = 1;
            u.pb(v[i]);
        }
        if (v[i] == 0)
        {
            u.pb(v[i]);
        }
    }
    // for (llint i = 0; i < u.size(); i++)
    // {
    //     cout << u[i] << " ";
    // }
    // cout << "\n";
    if (a == 1)
    {
        ans++;
        if (u.size() > 1)
        {
            for (llint i = 1; i < u.size() - 1; i++)
            {
                if (abs(u[i] - u[i - 1]) < u[u.size() - 1])
                {
                    ans--;
                    break;
                }
            }
        }
    }

    cout << ans << "\n";
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