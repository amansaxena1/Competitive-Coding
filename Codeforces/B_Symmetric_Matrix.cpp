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
    llint n, m, a;
    cin >> n >> m;
    vector<vector<llint>> v;
    vector<llint> temp;
    for (llint i = 0; i < n; i++)
    {
        temp.clear();
        for (llint i = 0; i < 4; i++)
        {
            cin >> a;
            temp.pb(a);
        }
        v.pb(temp);
    }
    if (m % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    for (llint i = 0; i < n; i++)
    {
        if (v[i][1] == v[i][2])
        {
            cout << "YES\n";
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