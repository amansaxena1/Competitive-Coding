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
    llint n, k;
    vector<pair<llint, llint>> v;
    string s;
    cin >> n >> k;
    cin >> s;
    llint cnt = 0;
    llint l = count(all(s), 'L');
    if (l <= k)
    {
        for (llint i = 0; i < s.length(); i++)
        {
            s[i] = 'W';
        }
    }
    else
    {
        for (llint i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                cnt++;
            }
            else if (cnt > 0)
            {
                v.pb({cnt, i - cnt});
                cnt = 0;
            }
        }
        if (cnt != 0)
        {
            v.pb({cnt, s.length() - cnt});
        }
        sort(all(v));
        if (v.size() > 1 && v[0].ff == v[1].ff)
        {
            swap(v[0], v[1]);
        }
        // for (llint i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].ff << " " << v[i].ss << "\n";
        // }
        llint i = 0;
        while (i < v.size() && k > 0)
        {
            for (llint j = 0; j < v[i].ff && k > 0; j++)
            {
                if (v[i].ss == 0)
                {
                    s[v[i].ff - j - 1] = 'W';
                    k--;
                }
                else
                {
                    s[v[i].ss + j] = 'W';
                    k--;
                }
            }
            i++;
            // cout << s << "\n";
        }
    }
    cnt = 0;
    for (llint i = 0; i < s.length(); i++)
    {
        if (i > 0 && s[i] == 'W' && s[i - 1] == 'W')
        {
            cnt += 2;
        }
        else if (s[i] == 'W')
        {
            cnt += 1;
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