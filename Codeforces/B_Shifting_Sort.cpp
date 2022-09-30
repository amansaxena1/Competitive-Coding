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
    vector<llint> v, u;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    u = v;
    sort(all(u));
    llint l, r, d;
    vector<llint> ans;
    for (llint i = 0; i < n; i++)
    {
        for (llint j = i; j < n; j++)
        {
            if (u[i] == v[j] && i != j)
            {
                l = i;
                r = j;
                d = abs(j - i);
                ans.pb(l);
                ans.pb(r);
                ans.pb(d);
                llint z = v[r];
                for (llint k = r - 1; k >= l; k--)
                {
                    v[k + 1] = v[k];
                }
                v[l] = z;
                break;
            }
        }
    }
    cout << ans.size() / 3 << "\n";
    for (llint i = 0; i < ans.size(); i += 3)
    {
        cout << ans[i] + 1 << " " << ans[i + 1] + 1 << " " << ans[i + 2] << "\n";
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