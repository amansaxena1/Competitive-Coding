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
    llint n, a = 1;
    cin >> n;

    llint ans = 0;
    for (llint i = 0; i < n; i++)
    {
        for (llint j = i; j < n; j++)
        {
            cout << "(";
        }
        for (llint j = i; j < n; j++)
        {
            cout << ")";
        }
        for (llint j = 0; j < i; j++)
        {
            cout << "(";
        }
        for (llint j = 0; j < i; j++)
        {
            cout << ")";
        }
        cout << "\n";
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