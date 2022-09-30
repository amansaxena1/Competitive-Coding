/*       ¯ಠಠ/¯        */
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
    llint n, m, a, b;
    cin >> n >> m;
    set<llint> r, c;
    llint rr = n, cc = n;
    for (llint i = 0; i < m; i++)
    {
        cin >> a >> b;
        llint p = 0;
        r.insert(a);
        c.insert(b);
        p = (n - r.size()) * (n - c.size());
        cout << p << " ";
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