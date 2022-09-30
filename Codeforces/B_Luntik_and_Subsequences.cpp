/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint unsigned long long int
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
    llint n, cnt = 0, z = 0;
    cin >> n;
    vector<llint> v;

    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
        if (vi == 1)
        {
            cnt++;
        }
        if (vi == 0)
        {
            z++;
        }
    }
    z = pow(2, z);
    cnt *= z;
    cout << cnt << "\n";
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