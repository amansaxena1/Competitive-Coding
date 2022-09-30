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
    llint n, m, k, mini, d;
    cin >> n >> m >> k;
    if (n > 0 && m > 0)
    {
        mini = max(n, m);
        if (k < mini)
        {
            cout << "-1\n";
        }
        else
        {
            cout << k - (mini - min(n, m)) << "\n";
        }
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