/*       ¯\_ಠ_ಠ_/¯        */

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
    llint n, p, k;
    cin >> n >> p >> k;

    llint ans = 0;
    if ((p % k) <= ((n - 1) % k))
    {
        ans = (p % k) * ((n - 1) / k + 1) + p / k + 1;
    }
    else
    {
        ans = ((n - 1) / k) * ((p - 1) % k + 1) + (n - 1) % k + 1 + p / k + 1;
    }
    cout << ans << endl;
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