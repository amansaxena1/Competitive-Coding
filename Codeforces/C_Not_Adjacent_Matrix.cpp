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
    llint n;
    cin >> n;
    if (n == 2)
    {
        cout << "-1\n";
        return;
    }
    vector<llint> v;
    for (llint i = 1; i <= n * n; i += 2)
    {
        v.pb(i);
    }
    for (llint i = 2; i <= n * n; i += 2)
    {
        v.pb(i);
    }

    llint a = 0;
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < n; j++)
        {
            cout << v[a] << " ";
            a++;
        }
        cout << "\n";
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