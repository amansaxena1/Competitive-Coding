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
    llint n;
    cin >> n;
    llint a[n][n];
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    llint ans[n][n];
    llint b = 0;

    for (llint i = 0; i < n; i++)
    {
        llint sum = 0;
        for (llint j = b, k = 0; j < n; j++, k++)
        {
            sum += a[j][k];
        }
        for (llint j = b, k = 0; j < n; j++, k++)
        {
            ans[j][k] = sum;
        }
        b++;
    }
    b = 1;
    for (llint i = 0; i < n - 1; i++)
    {
        llint sum = 0;
        for (llint j = b, k = 0; j < n; j++, k++)
        {
            sum += a[k][j];
        }
        for (llint j = b, k = 0; j < n; j++, k++)
        {
            ans[k][j] = sum;
        }
        b++;
    }

    b = 1;
    llint s = 0;
    for (llint i = 0; i < n; i++)
    {
        llint sum = 0;
        for (llint j = 0; j < b; j++)
        {
            sum += a[j][s - j];
        }
        for (llint j = 0; j < b; j++)
        {
            ans[j][s - j] += sum;
        }
        s++;
        b++;
    }
    b = n - 1;
    s = n;
    llint l = n - 1, cnt = 0;
    for (llint i = 0; i < n - 1; i++)
    {
        llint sum = 0;
        for (llint j = b, cnt = 0; cnt < l; j--, cnt++)
        {
            sum += a[s - j][j];
        }

        for (llint j = b, cnt = 0; cnt < l; j--, cnt++)
        {
            ans[s - j][j] += sum;
        }
        s++;
        l--;
    }

    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < n; j++)
        {
            ans[i][j] -= a[i][j];
        }
    }

    vector<pair<llint, pair<llint, llint>>> v, u;
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                v.pb(mp(ans[i][j], mp(i + 1, j + 1)));
            }
            else
            {
                u.pb(mp(ans[i][j], mp(i + 1, j + 1)));
            }
        }
    }
    sort(all(u));
    sort(all(v));
    cout << v[v.size() - 1].ff + u[u.size() - 1].ff << "\n";
    cout << v[v.size() - 1].ss.ff << " " << v[v.size() - 1].ss.ss << " " << u[u.size() - 1].ss.ff << " " << u[u.size() - 1].ss.ss;
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