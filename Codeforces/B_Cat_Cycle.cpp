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
    llint n, k;
    cin >> n >> k;
    llint b = 1, a = n;
    if (n % 2 == 0)
    {
        if (k > n)
        {
            a = k % n;
            if (a == 0)
            {
                a = n;
            }
            cout << a << "\n";
        }
        else
        {
            cout << k << "\n";
        }
    }
    else
    {
        if (k <= (n / 2))
        {
            cout << k << "\n";
        }
        else
        {
            a = k + ((k - 1) / floor(n / 2));
            a %= n;
            if (a == 0)
            {
                a = n;
            }
            cout << a << "\n";
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