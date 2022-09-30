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
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    vector<llint> u;
    for (llint i = 0; i < n; i++)
    {
        u.pb(v[i] - i);
    }
    if (count(u.begin(), u.end(), v[0]) != n)
    {
        cout << "1\n";
    }
    else
    {
        cout << n << "\n";
    }
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