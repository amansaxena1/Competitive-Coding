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
    llint n, i, j, x, count = 0, ans = 1;
    cin >> n;
    vector<llint> v, u, vec;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(x);
        u.pb(x);
    }
    sort(all(u));
    reverse(all(u));
    if (v[0] != *max_element(all(v)))
    {
        cout << "-1\n";
    }
    else
    {
        vec.pb(v[n - 1]);
        x = 1;
        for (i = n - 2; i >= 1; i--)
        {
            if (v[i] > vec[x - 1])
            {
                vec.pb(v[i]);
                x++;
            }
        }
        for (i = 1; i < vec.size(); i++)
        {
            if (vec[i] != vec[i - 1])
            {
                ans++;
            }
        }
        cout << ans << "\n";
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