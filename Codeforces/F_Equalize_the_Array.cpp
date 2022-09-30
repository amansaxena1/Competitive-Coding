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
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    sort(all(v));
    // for (llint i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";
    map<llint, llint> s;
    for (llint i = 0; i < n; i++)
    {
        s[v[i]]++;
    }
    vector<llint> p, q;
    for (auto itr = s.begin(); itr != s.end(); ++itr)
    {
        p.pb(itr->ss);
    }
    sort(all(p));
    // for (llint i = 0; i < p.size(); i++)
    // {
    //     cout << p[i] << " ";
    // }
    q = p;
    q.resize(distance(q.begin(), unique(q.begin(), q.end())));
    // llint ans = INT_MAX,sum=0;
    // cout << "\n";
    // for (llint i = 0; i < q.size(); i++)
    // {
    //     cout << q[i] << " ";
    // }
    // cout << "\n";
    llint sum = 0, ans = INT_MAX;
    for (llint i = 0; i < q.size(); i++)
    {
        for (llint j = 0; j < p.size(); j++)
        {
            if (p[j] < q[i])
            {
                sum += p[j];
            }
            else
            {
                sum += abs(q[i] - p[j]);
            }
            // cout << sum << " ";
        }
        // cout << "\n";
        // cout << sum << "\n";
        ans = min(ans, sum);
        sum = 0;
    }
    cout << ans << "\n";

    // for (auto itr = s.begin(); itr != s.end(); ++itr)
    // {
    //     cout << itr->ff << " " << itr->ss << "\n";
    // }
    // cout << "\n\n\n";
    // unordered_map<llint, llint> p;
    // for (auto itr = s.begin(); itr != s.end(); ++itr)
    // {
    //     p[itr->ss]++;
    // }

    // for (auto itr = p.begin(); itr != p.end(); ++itr)
    // {
    //     cout << itr->ff << " " << itr->ss << "\n";
    // }

    // for (auto itr = p.begin(); itr != p.end(); ++itr)
    // {
    //     cout << itr->ff << " " << itr->ss << "\n";
    // }
    // cout << "\n";

    // llint maxi = 0;
    // for (auto itr = p.begin(); itr != p.end(); ++itr)
    // {
    //     maxi = max(itr->ss, maxi);
    // }
    // cout << maxi << "\n";
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