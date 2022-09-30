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
    if (n == 3)
    {
        cout << "1 1 1\n";
    }
    else if (n == 4)
    {
        cout << "1 1 2\n";
    }
    else
    {
        if (n % 2 != 0)
        {
            cout << "1 " << n / 2 << " " << n / 2 << "\n";
        }
        else if (ceil(n / 3.0) == floor(n / 3.0))
        {
            cout << n / 3 << " " << n / 3 << " " << n / 3 << "\n";
        }
        else
        {
            if (ceil(n / 4.0) == floor(n / 4.0))
            {
                cout << n / 2 << " " << n / 4 << " " << n / 4 << "\n";
            }
            else if (n % 2 != 0)
            {
                cout << "1 " << (n - 2) / 2 << " " << (n - 2) / 2 << "\n";
            }
            else
            {
                cout << "2 " << (n - 2) / 2 << " " << (n - 2) / 2 << "\n";
            }
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