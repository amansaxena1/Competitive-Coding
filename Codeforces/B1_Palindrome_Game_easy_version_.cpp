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
    string s;
    cin >> n >> s;
    // if (n == 1)
    // {
    //     if (s[0] == '0')
    //     {
    //         cout << "BOB\n";
    //         return;
    //     }
    //     else
    //     {
    //         cout << "DRAW\n";
    //         return;
    //     }
    // }
    n = count(s.begin(), s.end(), '0');
    // cout << n << "\n";
    if (n == 1)
    {
        cout << "BOB\n";
        return;
    }
    if (n % 2 != 0)
    {
        cout << "ALICE\n";
        return;
    }
    else
    {
        cout << "BOB\n";
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