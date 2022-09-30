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
    cin >> n;
    string s;
    cin >> s;
    for (llint i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << i + 1 << " " << i + 2;
            cout << "\n";
            return;
        }
    }
    cout << "-1 -1\n";
    return;
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