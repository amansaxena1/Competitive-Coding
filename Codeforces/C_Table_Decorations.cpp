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
    llint r, b, g, ans = 0, m = 0, ma;
    vector<llint> v;
    for (llint i = 0; i < 3; i++)
    {
        cin >> r;
        v.pb(r);
        m += r;
    }
    // cout << m << " ";
    sort(all(v));
    // while (m >= 3 && !(v[0] == 0 && v[1] == 0))
    // {
    //     v[1]--;
    //     v[2] -= 2;
    //     sort(all(v));
    //     m -= 3;
    //     ans++;
    // }
    cout << min((v[0] + v[1] + v[2]) / 3, v[0] + v[1]) << "\n";
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