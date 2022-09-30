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
    llint n, a;
    cin >> n;
    string s;
    cin >> s;
    a = count(all(s), '0');
    llint cnt = s.length() - a;
    if (s[s.length() - 1] != '0')
    {
        cnt--;
    }
    // cout << cnt << " ";
    for (llint i = 0; i < s.length(); i++)
    {
        if (s[i] != '0')
        {
            cnt += s[i] - '0';
        }
    }
    cout << cnt << "\n";
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