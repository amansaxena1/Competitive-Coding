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
    vector<llint> v, ev, od, req, req1;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    llint e = 0, o = 0;
    for (llint i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            e++;
            ev.pb(i);
        }
        else
        {
            o++;
            od.pb(i);
        }
    }
    if (abs(e - o) >= 2)
    {
        cout << "-1\n";
        return;
    }
    llint flag = 0, e1 = 0, o1 = 0;
    char ch = 'q';
    if (e > o)
    {
        req.pb(ev[0]);
        e = 1;
        o = 0;
        ch = 'o';
    }
    else if (o > e)
    {
        req.pb(od[0]);
        o = 1;
        e = 0;
        ch = 'e';
    }
    else
    {
        flag = 1;
        // req.pb(v[0]);
        if (v[0] % 2 == 0)
        {
            req.pb(ev[0]);
            req1.pb(od[0]);
            e1 = 0;
            o1 = 1;
            e = 1;
            o = 0;
            ch = 'o';
        }
        else
        {
            req.pb(od[0]);
            req1.pb(ev[0]);
            e1 = 1;
            o1 = 0;
            e = 0;
            o = 1;
            ch = 'e';
        }
    }
    // cout << req[0];
    // o = 0, e = 0;
    for (llint i = 0; i < n; i++)
    {
        // if (req[0] % 2 == 0 && i == 0)
        // {
        //     e++;
        //     ch = 'o';
        // }
        // else if (req[0] % 2 != 0 && i == 0)
        // {
        //     o++;
        //     ch = 'e';
        // }
        if (i > 0)
        {
            if (ch == 'o')
            {
                req.pb(od[o]);
                req1.pb(ev[e1]);
                o++;
                e1++;
                ch = 'e';
            }
            else if (ch == 'e')
            {
                req.pb(ev[e]);
                req1.pb(od[o1]);
                e++;
                o1++;
                ch = 'o';
            }
        }
    }
    llint ans1 = 0;
    if (flag == 1)
    {
        for (llint i = 0; i < n; i++)
        {
            if (req1[i] - i > 0)
            {
                ans1 += (req1[i] - i);
            }
        }
    }
    // for (llint i = 0; i < req.size(); i++)
    // {
    //     cout << req[i] << " ";
    // }
    // cout << "\n";

    // for (llint i = 0; i < req1.size(); i++)
    // {
    //     cout << req1[i] << " ";
    // }
    // cout << "\n";

    llint ans = 0;
    for (llint i = 0; i < n; i++)
    {
        if (req[i] - i > 0)
        {
            ans += (req[i] - i);
        }
    }
    if (flag == 1)
    {
        cout << min(ans1, ans) << "\n";
        return;
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