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
    cin >> n;
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    for (llint i = 1; i < v.size(); i++)
    {
        if (abs(v[i] - v[i - 1]) >= 2)
        {
            cout << "YES\n";
            cout << i << " " << i + 1 << "\n";
            return;
        }
    }
    cout << "NO\n";
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