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
    llint n, k, a;
    cin >> n >> k;
    vector<llint> v;
    vector<llint> u;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    u = v;
    sort(all(u));
    // for (llint i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    for (llint i = 0; i < k; i++)
    {
        if (u[i] < 0)
        {
            u[i] = u[i] * -1;
        }
    }
    llint sum = 0;
    for (llint i = 0; i < u.size(); i++)
    {
        if (u[i] >= 0)
        {
            sum += u[i];
        }
    }
    cout << sum << "\n";
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