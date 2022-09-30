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
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    deque<llint> q;
    q.push_back(v[0]);
    for (llint i = 1; i < n; i++)
    {
        if (v[i] > q.front())
        {
            q.push_back(v[i]);
        }
        else
        {
            q.push_front(v[i]);
        }
    }
    for (auto i : q)
    {
        cout << i << " ";
    }
    cout << "\n";
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