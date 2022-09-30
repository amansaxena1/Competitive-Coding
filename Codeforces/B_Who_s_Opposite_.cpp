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
    llint a, b, c;
    cin >> a >> b >> c;
    if (max(a, max(b, c)) > 2 * abs(b - a))
    {
        cout << "-1\n";
        return;
    }
    if (2 * abs(b - a) < c + abs(b - a))
    {
        cout << c - abs(b - a) << "\n";
    }
    else
    {
        cout << c + abs(b - a) << "\n";
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