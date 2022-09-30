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
    vector<llint> v, vp;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    };
    llint d = INT_MIN;
    llint t = -1, cnt = 1, maxi = INT_MIN;
    for (llint i = 1; i < n; i++)
    {
        t = v[i] - v[i - 1];
        vp.pb(t);
        // if (t == d)
        // {
        //     cnt++;
        // }
        // else
        // {
        //     d = t;
        // }
        // maxi = max(maxi, cnt);
    }
    llint ans = vp[0];
    for (llint i = 0; i < vp.size(); i++)
    {
        ans = __gcd(vp[i], ans);
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