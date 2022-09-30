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
    llint n, x, y, cnt = 0;
    string s, ans = "1";
    cin >> n >> x >> y;
    cin >> s;
    for (llint i = 0; i < y; i++)
    {
        ans += "0";
    }
    for (llint i = 0; i < ans.length(); i++)
    {
        if (ans[ans.length() - 1 - i] != s[s.length() - 1 - i])
        {
            cnt++;
        }
    }
    for (llint i = y + 1; i < x; i++)
    {
        if (s[s.length() - 1 - i] != '0')
        {
            cnt++;
        }
    }
    cout << cnt << "\n";
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