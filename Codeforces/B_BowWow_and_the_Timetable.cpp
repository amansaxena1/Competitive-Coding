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
    string s;
    cin >> s;
    double n = s.length();
    llint cnt = count(s.begin(), s.end(), '1');
    if (s == "0")
    {
        cout << 0 << "\n";
        return;
    }
    if (cnt == 1)
    {
        cout << ceil((n - 1) / 2) << "\n";
        return;
    }
    cout << ceil(n / 2) << "\n";
}
int main()
{
    fast;
    llint t = 1, n, a;
    while (t--)
    {
        aman();
    }
    return 0;
}