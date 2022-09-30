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
    llint n, m, p;
    vector<llint> r, b;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> p;
        r.pb(p);
    }
    cin >> m;
    for (llint i = 0; i < m; i++)
    {
        cin >> p;
        b.pb(p);
    }
    llint rm = 0, sum = 0;
    for (llint i = 0; i < n; i++)
    {
        sum += r[i];
        rm = max(sum, rm);
    }
    llint bm = 0;
    sum = 0;
    for (llint i = 0; i < m; i++)
    {
        sum += b[i];
        bm = max(sum, bm);
        // cout << bm << "\n";
    }
    // cout << rm << " " << bm << "\n";
    cout << rm + bm << "\n";
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