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
    llint n, m;
    cin >> n >> m;
    vector<pair<llint, llint>> v;
    llint p = m;
    while (p--)
    {
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    sort(all(v));
    llint sum = 0, c = n, lcm = v[m - 1].second;
    for (llint i = m - 1; i >= 0; i--)
    {
        lcm = (lcm * v[i].second) / (__gcd(lcm, v[i].second));
        sum += v[i].first * (c - n / lcm);
        c = n / lcm;
        }
    cout << sum << endl;
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