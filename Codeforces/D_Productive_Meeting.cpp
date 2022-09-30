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
    llint n;
    vector<pair<llint, llint>> v;
    priority_queue<pair<llint, llint>> q;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        q.push({vi, i});
    }
    pair<llint, llint> a, b;
    while (q.top().ff > 0)
    {
        a = q.top();
        q.pop();
        if (q.top().ff > 0)
        {
            b = q.top();
            q.pop();
            v.pb({a.ss, b.ss});
            q.push({a.ff - 1, a.ss});
            q.push({b.ff - 1, b.ss});
        }
        else
        {
            break;
        }
    }
    cout << v.size() << "\n";
    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i].ff + 1 << " " << v[i].ss + 1 << "\n";
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