#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define vec vector<llint> v
#define vp vector < pair<llint, llint> v
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;

llint findMinCost(vector<vector<llint>> cost, llint m, llint n)
{
    if (n == 0 || m == 0)
    {
        return INT_MAX;
    }
    if (m == 1 && n == 1)
    {
        return cost[0][0];
    }
    return min(findMinCost(cost, m - 1, n), findMinCost(cost, m, n - 1)) + cost[m - 1][n - 1];
}

void aman()
{
    llint n, m, a;
    cin >> n >> m;

    vector<vector<llint>> v;
    vector<llint> p;
    for (llint i = 0; i < n; i++)
    {
        for (llint j = 0; j < m; j++)
        {
            cin >> a;
            p.pb(a);
        }
        v.pb(p);
    }
    cout << findMinCost(v, n, m) << "\n";
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