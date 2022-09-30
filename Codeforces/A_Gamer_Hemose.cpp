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
    llint n, h;
    vector<llint> v;
    cin >> n >> h;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    sort(all(v));
    llint i = 0;
    llint sum = 0;
    llint a = v[v.size() - 1] + v[v.size() - 2];
    llint p = h / a;
    i = 2 * p;
    h -= (p * a);
    if (h > 0)
    {
        h -= v[v.size() - 1];
        i++;
    }
    if (h > 0)
    {
        i++;
    }
    cout << i << "\n";
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