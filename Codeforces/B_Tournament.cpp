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
    llint n, a, b;
    string s;
    cin >> n;
    vector<pair<llint, llint>> vp;
    vector<llint> v;
    for (llint i = 0; i < (n * (n - 1) / 2) - 1; i++)
    {
        cin >> a >> b;
        vp.pb({a, b});
        v.pb(a);
        v.pb(b);
    }
    sort(all(v));
    vector<llint> ans;
    llint cnt = 1;
    for (llint i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1] && cnt < n - 1)
        {
            ans.pb(v[i]);
            cnt = 1;
        }
        else if (v[i] != v[i + 1] && cnt == n - 1)
        {
            cnt = 1;
        }
        else
        {
            cnt++;
        }
    }
    if (ans.size() == 1)
    {
        ans.pb(v[v.size() - 1]);
    }
    // for (llint i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << "\n";
    vector<llint> m1, m2;

    for (llint i = 0; i < vp.size(); i++)
    {
        if (vp[i].ff == ans[0])
        {
            m1.pb(vp[i].ss);
        }
        if (vp[i].ss == ans[1])
        {
            m2.pb(vp[i].ff);
        }
    }
    for (llint i = 0; i < m1.size(); i++)
    {
        for (llint j = 0; j < m2.size(); j++)
        {
            if (m1.size() > 0 && m2.size() > 0 && m1[i] == m2[j])
            {
                cout << ans[0] << " " << ans[1];
                return;
            }
        }
    }
    m1.clear();
    m2.clear();
    for (llint i = 0; i < vp.size(); i++)
    {
        if (vp[i].ff == ans[1])
        {
            m1.pb(vp[i].ss);
        }
        if (vp[i].ss == ans[0])
        {
            m2.pb(vp[i].ff);
        }
    }
    for (llint i = 0; i < m1.size(); i++)
    {
        for (llint j = 0; j < m2.size(); j++)
        {
            if (m1[i] == m2[j])
            {
                cout << ans[1] << " " << ans[0];
                return;
            }
        }
    }
    cout << ans[0] << " " << ans[1];
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