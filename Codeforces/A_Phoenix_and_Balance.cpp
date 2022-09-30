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
    llint n, a, b = 0;
    cin >> n;
    a = pow(2, n);
    for (llint i = 1; i < n; i++)
    {
        if (i < n / 2)
        {
            a += pow(2, i);
        }
        else
        {
            b += pow(2, i);
        }
    }
    cout << abs(a - b) << "\n";
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