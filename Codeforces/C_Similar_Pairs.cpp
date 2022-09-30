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
    vector<llint> v;
    llint e = 0, o = 0;
    string s;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(all(v));
    for (llint i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if (e % 2 == 0 && o % 2 == 0)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        for (llint i = 0; i < n - 1; i++)
        {
            if (v[i] + 1 == v[i + 1])
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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