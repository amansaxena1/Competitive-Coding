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
    llint n;
    cin >> n;
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    sort(all(v));

    for (llint i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
    // llint mini = v[1] - v[0];
    // for (llint i = 1; i < v.size(); i++)
    // {
    //     mini = __gcd(v[i] - v[i - 1], mini);
    // }
    // if (mini == 0)
    // {
    //     cout << "-1\n";
    //     return;
    // }
    // cout << mini << "\n";
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