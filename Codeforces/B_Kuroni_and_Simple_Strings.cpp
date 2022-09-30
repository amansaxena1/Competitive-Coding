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
    llint n, a = 0, b = 0;
    // vector<llint>v;
    string s;
    cin >> s;
    vector<pair<llint, llint>> v;
    for (llint i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            v.pb(mp(++a, b));
        }
        else
        {
            v.pb(mp(a, ++b));
        }
    }
    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i].ff << " " << v[i].ss << "\n";
    }
}
int main()
{
    fast;
    llint t = 1, n, a;
    // cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}