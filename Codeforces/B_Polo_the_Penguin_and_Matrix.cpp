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
    llint n, m, d;
    cin >> n >> m >> d;
    llint arr[n][m];
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            v.pb(arr[i][j]);
        }
    }
    llint flag = 0;
    llint ans = 0;
    sort(all(v));
    for (llint i = 1; i < v.size(); i++)
    {
        if ((v[i] - v[i - 1]) % d != 0)
        {
            ans = -1;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        llint a = v[v.size() / 2];
        for (llint i = 0; i < v.size(); i++)
        {
            ans += abs(a - v[i]) / d;
        }
    }
    cout << ans;
    return;
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