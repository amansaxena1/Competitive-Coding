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
    vector<double> v;
    cin >> n;
    llint sum = 0;
    for (llint i = 0; i < n; i++)
    {
        double vi;
        cin >> vi;
        v.pb(vi);
        sum += vi;
    }
    llint ans = 0;
    llint p, q;
    for (llint i = 0; i < n; i++)
    {
        p = pow(2, floor(log2(v[i])));
        q = pow(2, ceil(log2(v[i])));
        cout << min(p, q) << " ";
    }
    cout << "\n";
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