/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define ll long long int
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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> power(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        vector<ll> p(x);
        ll mxp = -1;
        for (int j = 0; j < x; j++)
        {
            cin >> p[j];
            mxp = max(mxp, p[j] - j + 1);
        }
        power[i] = {mxp, x};
    }
    sort(power.begin(), power.end());
    ll l = power[0].first, r = power[n - 1].first;
    ll ans = 1e12;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll curr = mid;
        bool ok = 1;
        for (int i = 0; i < n; i++)
        {
            if (curr >= power[i].first)
            {
                curr += power[i].second;
            }
            else
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}
int main()
{
    fast;
    ll t = 1, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}