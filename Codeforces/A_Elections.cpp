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
    llint a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "0 ";
    }
    else
    {
        cout << max(b, c) - a + 1 << " ";
    }
    if (b > a && b > c)
    {
        cout << "0 ";
    }
    else
    {
        cout << max(a, c) - b + 1 << " ";
    }
    if (c > b && c > a)
    {
        cout << "0 ";
    }
    else
    {
        cout << max(a, b) - c + 1 << " ";
    }
    cout << "\n";
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