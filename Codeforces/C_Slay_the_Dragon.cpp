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

    llint n, s = 0;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
        s += v[i];
    }
    sort(all(v));
    llint q, d, a;
    cin >> q;
    for (llint l = 0; l < q; l++)
    {
        cin >> d >> a;
        llint index = -1;
        llint li = 0, ri = v.size() - 1, mi = (li + ri) / 2, f = 0;
        if (v[0] > d)
        {
            if (s - v[0] >= a)
            {
                cout << "0\n";
            }
            else
            {
                cout << a - (s - v[0]) << "\n";
            }
        }
        else
        {
            while (li < ri)
            {
                mi = (li + ri) / 2;
                if (v[mi] == d)
                {
                    f = 1;
                    break;
                }
                else if (v[mi] < d)
                {
                    if (mi < n - 1 && v[mi + 1] > d)
                    {
                        index = mi + 1;
                        break;
                    }
                    li = mi + 1; //
                }
                else if (mi > 0 && v[mi] > d)
                {
                    if (v[mi - 1] < d)
                    {
                        index = mi;
                        break;
                    }
                    ri = mi;
                }
            }
            if (f == 1)
            {
                if (s - d >= a)
                {
                    cout << "0\n";
                }
                else
                {
                    cout << a - (s - d) << "\n"; //2 3 3 6
                }
            }
            else if (index == -1)
            {
                llint ans = d - v[v.size() - 1];
                if (a - (s - v[v.size() - 1]) > 0)
                {
                    ans += a - (s - v[v.size() - 1]);
                }
                cout << ans << "\n";
            }
            else
            {
                llint left = v[index - 1];
                llint right = v[index];
                llint j = d - left;
                if (a - (s - left) > 0)
                {
                    j += a - (s - left);
                }
                llint k = 0;
                if (a - (s - right) > 0)
                {
                    k += a - (s - right);
                }
                cout << min(j, k) << "\n";
            }
        }
    }
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