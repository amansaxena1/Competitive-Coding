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
    vector<pair<llint, char>> v;
    llint vo = 0, co = 0, cnt = 0;
    char ch = 'A';
    for (llint i = 0; i < 26; i++)
    {
        v.pb(mp(0, ch));
        ch++;
    }

    for (llint i = 0; i < s.length(); i++)
    {
        v[s[i] - 65].ff++;
    }
    sort(all(v));
    // for (llint i = 0; i < 26; i++)
    // {
    //     cout << v[i].ff << " " << v[i].ss << "\n";
    // }
    llint flag = 0, ans = 0;
    if (v[v.size() - 1].ss == 'A' || v[v.size() - 1].ss == 'E' || v[v.size() - 1].ss == 'I' || v[v.size() - 1].ss == 'O' || v[v.size() - 1].ss == 'U')
    {
        flag = 1;
        vo++;
    }
    else
    {
        co++;
    }

    for (llint i = 24; i >= 0; i--)
    {
        // cout << " *";
        if (v[i].ff == v[i + 1].ff)
        {
            // cout << " #";
            if (v[i].ss == 'A' || v[i].ss == 'E' || v[i].ss == 'I' || v[i].ss == 'O' || v[i].ss == 'U')
            {
                vo++;
            }
            else
            {
                co++;
            }
        }
        else
        {
            // cout << " % " << vo << " " << co << " " << flag << "\n";
            if (vo < co && flag == 0)
            {
                // cout << " *" << i;
                for (llint j = 25; j > i; j--)
                {
                    if (v[j].ss == 'A' || v[j].ss == 'E' || v[j].ss == 'I' || v[j].ss == 'O' || v[j].ss == 'U')
                    {
                        swap(v[v.size() - 1], v[j]);
                        flag = 1;
                        break;
                    }
                }
            }
            else if (co < vo && flag == 1)
            {
                // cout << " *";
                for (llint j = 25; j > i; j--)
                {
                    if (v[j].ss != 'A' && v[j].ss != 'E' && v[j].ss != 'I' & v[j].ss != 'O' && v[j].ss != 'U')
                    {
                        swap(v[v.size() - 1], v[j]);
                        flag = 0;
                        break;
                    }
                }
            }
            break;
        }
    }
    // for (llint i = 0; i < 26; i++)
    // {
    //     cout << v[i].ff << " " << v[i].ss << "\n";
    // }

    if (flag == 0)
    {
        for (llint i = 0; i < 25; i++)
        {
            if (v[i].ss == 'A' || v[i].ss == 'E' || v[i].ss == 'I' || v[i].ss == 'O' || v[i].ss == 'U')
            {
                ans += 1 * v[i].ff;
            }
            else
            {
                ans += 2 * v[i].ff;
            }
        }
    }
    else
    {
        for (llint i = 0; i < 25; i++)
        {
            if (v[i].ss == 'A' || v[i].ss == 'E' || v[i].ss == 'I' || v[i].ss == 'O' || v[i].ss == 'U')
            {
                ans += 2 * v[i].ff;
            }
            else
            {
                ans += 1 * v[i].ff;
            }
        }
    }
    cout << ans << "\n";
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