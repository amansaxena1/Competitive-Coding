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
    // cout << "aman\n";
    double n, sum = 0;
    cin >> n;
    vector<double> v;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
        sum += vi;
    }
    double x = 2 * sum / n;
    unordered_map<double, double> m;
    for (llint i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    double ans = 0;
    double an = 0;
    for (auto i : m)
    {
        if (i.first == x / 2)
        {
            ans += (i.ss - 1) * (i.ss - 2);
        }
        else if (m.find(x - i.first) != m.end())
        {
            an += (i.second * m[x - i.first]);
        }
    }
    an /= 2;
    ans += an;
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