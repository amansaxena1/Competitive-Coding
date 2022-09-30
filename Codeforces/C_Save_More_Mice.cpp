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
    llint n, m, t;
    vector<llint> v;
    cin >> n >> m;
    t = n;
    for (llint i = 0; i < m; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    sort(all(v), greater<llint>());
    for (llint i = 0; i < m; i++)
    {
        v[i] = n - v[i];
    }
    llint cnt = 0;
    for (llint i = 0; i < m; i++)
    {
        if (v[i] < t)
        {
            cnt++;
            t -= v[i];
        }
        else
        {
            break;
        }
        // cout << t << " ";
    }
    // cout << "\n";
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