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
    llint n, m, k, a, b = 0, c;
    cin >> n >> m >> k;
    vector<llint> v;
    llint cnt = 0;
    for (llint i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a = 1;
            c = 1;
        }
        else
        {
            a = m;
            c = -1;
        }
        for (llint j = 0; j < m; j += 1)
        {
            v.pb(i + 1);
            v.pb(a);
            a += c;
        }
    }
    // for (llint i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    a = 0;
    for (llint i = 0; i < k - 1; i++)
    {
        cout << "2 " << v[a] << " " << v[a + 1] << " " << v[a + 2] << " " << v[a + 3] << "\n";
        a += 4;
    }
    cout << (n * m) - (2 * (k - 1)) << " ";
    for (llint i = a; i < v.size(); i++)
    {
        // b++;
        cout << v[i] << " ";
    }
    // cout << b;
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