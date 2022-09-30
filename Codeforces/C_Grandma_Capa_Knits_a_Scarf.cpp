/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman()
{
    llint n, i, j, f, c = 0, ans = INT_MAX, p = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<llint> v(26);
    for (llint k = 0; k <= 25; k++)
    {
        f = 0;
        i = 0;
        j = s.length() - 1;
        while (j > i)
        {
            if (s[i] == 'a' + k)
            {
                i++;
            }
            else if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else if (s[j] == 'a' + k)
            {
                j--;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            if (find(all(s), 'a' + k) != s.end())
            {
                v[k] = 1;
            }
        }
    }
    for (llint k = 0; k <= 25; k++)
    {
        f = 0;
        i = 0;
        j = s.length() - 1;
        c = 0;
        if (v[k] == 1)
        {
            while (j > i)
            {
                if (s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else if (s[i] == 'a' + k)
                {
                    i++;
                    c++;
                }
                else if (s[j] == 'a' + k)
                {
                    j--;
                    c++;
                }
                else
                {
                    f = 1;
                    p++;
                    break;
                }
            }
            if (f == 0)
            {
                ans = min(ans, c);
            }
        }
        else
        {
            p++;
        }
    }
    if (p < 26 || p > 26)
    {
        cout << ans << "\n";
    }
    else
    {
        cout << "-1\n";
    }
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