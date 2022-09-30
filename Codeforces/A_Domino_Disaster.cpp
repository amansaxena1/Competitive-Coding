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
    llint a;
    cin >> a;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'U')
        {
            s[i] = 'D';
        }
        else if (s[i] == 'D')
        {
            s[i] = 'U';
        }
    }
    cout << s << "\n";
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