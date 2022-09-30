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
    string s;
    cin >> n >> k;
    cin >> s;
    if (count(all(s), 'L') == n)
    {
        for (llint j = 0; j < min(n, k); j++)
        {
            s[j] = 'W';
        }
    }
    else if (count(all(s), 'L') <= k)
    {
        for (llint i = 0; i < n; i++)
        {
            s[i] = 'W';
        }
    }
    else
    {
        llint c = 0, st = 0;
        vector<pair<llint, llint>> v;
        for (llint i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                if (c == 0)
                {
                    st = i;
                }
                c++;
            }
            else
            {
                if (c > 0)
                {
                    v.pb({c, st});
                    c = 0;
                }
            }
        }
        if (c > 0)
        {
            v.pb({c, st});
        }
        // cout << v.size() << " *";
        // for (llint i = 0; i < v.size(); i++)
        // {
        //     cout << v[i].ff << " " << v[i].ss << "\n";
        // }
        sort(all(v));
        llint j = 0;
        if (v[0].ff == v[1].ff)
        {
            swap(v[0], v[1]);
        }
        while (k > 0)
        {
            // cout << v[j].ff;
            for (llint i = 0; i < v[j].ff && k > 0; i++)
            {
                // cout << "*";
                s[i + v[j].ss] = 'W';
                k--;
            }
            j++;
            if (j > v.size() - 1)
            {
                break;
            }
        }
    }
    llint cnt = 0;
    cout << s << "\n";
    for (llint i = 0; i < n; i++)
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