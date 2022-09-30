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
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}
void aman()
{
    llint n, a, b;
    vector<pair<llint, llint>> v, u;
    string s = "";
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.pb({a, b});
        u.pb({b, a});
    }
    sort(all(u));
    sort(all(v));
    llint x = 0, y = 0;
    // sort(all(v), sortbysec);
    // for (llint i = 0; i < n; i++)
    // {
    //     cout << v[i].ff << " " << v[i].ss << " " << u[i].ss << " " << u[i].ff << "\n";
    // }
    for (llint i = 0; i < n; i++)
    {
        if ((v[i].ff != u[i].ss) || (v[i].ss != u[i].ff))
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < v[i].ff - x; j++)
        {
            s += 'R';
        }
        x = v[i].ff;
        for (llint j = 0; j < v[i].ss - y; j++)
        {
            s += 'U';
        }
        y = v[i].ss;
    }
    cout << s << "\n";
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