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
    double n, w, sum = 0;
    vector<llint> v;
    map<llint, llint> m;
    cin >> n >> w;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
        m[vi]++;
        sum += vi;
    }

    // for (auto i = m.begin(); i != m.end(); i++)
    // {
    //     while ((i->ss) > 1)
    //     {
    //         if (pow(2, (log2(i->ff)) + 1) < w)
    //         {
    //             m[pow(2, (log2(i->ff)) + 1)]++;
    //             (i->ss) -= 2;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     if ((i->ss) == 0)
    //     {
    //         m.erase(i->ff);
    //     }
    // }
    vector<pair<llint, llint>> vp;
    for (auto i = m.begin(); i != m.end(); i++)
    {
        vp.pb({(i->ff), (i->ss)});
        // cout << (i->ff) << " " << (i->ss) << "\n";
    }
    // vector<llint> p;
    // for (llint i = 0; i < vp[vp.size() - 1].ss; i++)
    // {
    //     p.pb(w - vp[vp.size() - 1].ff);
    // }
    // llint f = 0;
    // for (llint i = vp.size() - 2; i >= 0; i--)
    // {
    //     f = 0;
    //     for (llint j = 0; j < p.size(); j++)
    //     {
    //         if (vp[i].ff <= p[j])
    //         {
    //             p[j] -= vp[i].ff;
    //             f = 1;
    //             break;
    //         }
    //     }
    //     if (f == 0)
    //     {
    //         p.pb(w - vp[i].ff);
    //     }
    // }
    // cout << p.size() << "\n";
    llint cnt = 1, st = 0;
    llint curr = w;
    while (n--)
    {
        if (curr < vp[st].ff)
        {
            curr = w;
            cnt++;
        }
        for (llint i = vp.size() - 1; i >= 0; i--)
        {
            if (vp[i].ss > 0 && vp[i].ff <= curr)
            {
                curr -= vp[i].ff;
                vp[i].ss = vp[i].ss - 1;
                break;
            }
        }
        if (vp[st].ss == 0)
        {
            for (llint i = 0; i < v.size(); i++)
            {
                if (vp[i].ss > 0)
                {
                    st = i;
                    break;
                }
            }
        }
    }
    cout << cnt << "\n";
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