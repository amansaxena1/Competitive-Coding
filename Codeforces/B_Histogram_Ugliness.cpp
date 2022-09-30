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
    vector<llint> v, u, w;
    string s;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    v.pb(0);
    llint sum = v[0], f = 1;
    for (llint i = 1; i < v.size(); i++)
    {
        sum += abs(v[i - 1] - v[i]);
    }
    u.pb(0);
    for (llint i = 0; i < v.size(); i++)
    {
        u.pb(v[i]);
    }
    u.pb(0);

    llint m = 0;
    for (llint i = 1; i < u.size() - 1; i++)
    {
        a = u[i] - max(u[i - 1], u[i + 1]);
        if (a > 0)
        {
            m += a;
        }
    }
    cout << sum - m << "\n";
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