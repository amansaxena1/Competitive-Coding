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
    llint n, a = 2;
    vector<llint> v;
    string s;
    cin >> s;
    llint ans = 0;
    for (llint i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (s[i] == '0')
            {
                ans += 1;
            }
            else
            {
                ans += 0;
            }
        }
    }
    if (s[s.length() - 1] == '0')
    {
        ans += 1;
    }
    cout << min(ans, a) << "\n";
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