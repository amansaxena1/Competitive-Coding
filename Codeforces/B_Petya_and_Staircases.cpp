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
    if (k == 0)
    {
        cout << "YES\n";
        return;
    }
    for (llint i = 0; i < k; i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(all(v));
    if (v[0] == 1 || v[v.size() - 1] == n)
    {
        cout << "NO\n";
        return;
    }
    for (llint i = 2; i < v.size(); i++)
    {
        if (v[i - 2] + 1 == v[i - 1] && v[i - 1] + 1 == v[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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