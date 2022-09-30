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
    vector<llint> v, temp;
    string s;
    cin >> n;
    cin >> s;
    for (llint i = 0; i < n; i++)
    {
        if (s[i] == '4')
        {
            v.pb(2);
            v.pb(2);
            v.pb(3);
        }
        else if (s[i] == '8')
        {
            v.pb(2);
            v.pb(2);
            v.pb(2);
            v.pb(7);
        }
        else if (s[i] == '6')
        {
            v.pb(5);
            v.pb(3);
        }
        else if (s[i] == '9')
        {
            v.pb(2);
            v.pb(3);
            v.pb(3);
            v.pb(7);
        }
        else if (s[i] != '0' && s[i] != '1')
        {
            v.pb(s[i] - '0');
        }
    }
    sort(all(v), greater<llint>());
    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i];
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