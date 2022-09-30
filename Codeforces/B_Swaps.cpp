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
    llint n;
    cin >> n;
    vector<pair<llint, llint>> a, b;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        a.pb({vi, i});
    }
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        b.pb({vi, i});
    }
    sort(all(a));
    sort(all(b));
    llint ans = INT_MAX, t = 0;
    for (llint i = 0; i < n; i++)
    {
        t = a[i].ss;
        if (a[i].ss < ans)
        {
            llint m = INT_MAX;
            for (llint j = (a[i].ff + 1) / 2 - 1; j < n; j++)
            {
                m = min(m, b[j].ss);
            }
            ans = min(ans, t + m);
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