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
    llint a = 0, b = 0, c, d, k;
    cin >> c >> d;
    if (abs(c - d) == 1)
    {
        cout << "-1\n";
        return;
    }
    if (c == d)
    {
        if (c == 0)
        {
            cout << "0\n";
            return;
        }
        cout << "1\n";
        return;
    }
    if (abs(c - d) % 2 == 0)
    {
        cout << "2\n";
        return;
    }
    else
    {
        cout << "-1\n";
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