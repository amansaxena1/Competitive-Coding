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
    double a = 0.000000000, b = 0.000000000, d;
    cin >> d;
    if ((d * d) - 4 * d < 0)
    {
        cout << "N\n";
        return;
    }
    else
    {
        cout << "Y ";
        a = (d + (double)sqrt((d * d) - 4 * d)) / 2;
        b = (d - (double)sqrt((d * d) - 4 * d)) / 2;
        std::cout << std::fixed;
        std::cout << std::setprecision(9);
        cout << a << " " << b << "\n";
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