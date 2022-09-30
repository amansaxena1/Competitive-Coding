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
    llint a, b, c, n, p, a1, b1, c1;
    cin >> a >> b >> c >> n;
    if ((a + b + c + n) % 3 != 0)
    {
        cout << "NO\n";
        return;
    }
    else
    {
        p = max((a + b + c + n) / 3, max(a, max(b, c)));
        a1 = p - a;
        b1 = p - b;
        c1 = p - c;
        if (a1 + b1 + c1 == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
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