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
    llint f1 = 0, f2 = 0, f3 = 0, sum = 0;
    for (llint i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            f1++;
        }
        if (s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8')
        {
            f2 = 1;
        }
        sum += s[i] - '0';
    }
    if (sum % 3 == 0 && f1 == 1 && f2 == 1)
    {
        cout << "red\n";
        return;
    }
    if (sum % 3 == 0 && f1 > 1)
    {
        cout << "red\n";
        return;
    }
    if (count(s.begin(), s.end(), '0') == s.length())
    {
        cout << "red\n";
        return;
    }
    cout << "cyan\n";
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