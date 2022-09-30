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
    string s, a = "";
    cin >> s;
    llint c = 1, d = 0;
    a += s[0];
    for (llint i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
        }
        else
        {
            d = c;
            c = 1;
        }
        if (c < 3)
        {
            if (!(c == 2 && d == 2))
            {
                a += s[i];
            }
            else
            {
                c--;
            }
        }
        else
        {
            c--;
        }
    }
    cout << a;
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