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
    llint n, a, b, d, p;
    cin >> n;
    vector<pair<llint, llint>> v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    cin >> d >> p;
    sort(all(v));
    reverse(all(v));
    // for (llint i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].ff << " " << v[i].ss << "\n";
    // }
    llint req = d - p, cnt = 0;
    while (req > 0)
    {
        llint md = p, maxi = INT_MIN, index = 0;
        for (llint i = index; i < v.size(); i++)
        {
            if (p >= d - v[i].ff)
            {
                if (p - (d - v[i].ff) + v[i].ss > maxi)
                {
                    maxi = p + v[i].ss;
                    index = i;
                }
            }
        }
        // cnt++;
        // req--;
        if (maxi < 0)
        {
            cnt = -1;
            break;
        }
        else
        {
            cnt++;
            p = maxi;
            req = d - p;
        }
    }
    cout << min(cnt, n);
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