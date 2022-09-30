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
    vector<pair<llint, llint>> v, u;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb({vi, i});
    }
    u = v;
    sort(all(u));
    cout << n - 1 << "\n";
    llint a = 1;
    for (llint i = u[0].ss - 1; i >= 0; i--, a++)
    {
        cout << u[0].ss + 1 << " " << i + 1 << " " << u[0].ff << " " << u[0].ff + a << "\n";
    }
    a = 1;
    for (llint i = u[0].ss + 1; i < n; i++, a++)
    {
        cout << u[0].ss + 1 << " " << i + 1 << " " << u[0].ff << " " << u[0].ff + a << "\n";
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