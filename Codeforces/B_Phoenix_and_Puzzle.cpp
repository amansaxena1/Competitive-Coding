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

    double a, b;
    llint c;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "NO\n";
    }
    else
    {
        a = n / 2.0;
        b = n / 4.0;
        if (ceil(sqrt(a)) == floor(sqrt(a)) || ceil(sqrt(b)) == floor(sqrt(b)))
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