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
    llint n, a;
    vector<llint> in, out;
    unordered_set<llint> s;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        in.pb(vi);
    }
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        out.pb(vi);
    }
    if (in == out)
    {
        cout << "0\n";
        return;
    }
    llint cnt = 0;
    s.insert(in[0]);
    for (llint i = 0; i < n; i++)
    {
        if (s.find(out[i]) == s.end())
        {
            cnt++;
            cout << out[i] << " ";
        }
        else
        {
            s.insert(in[i]);
        }
    }
    cout << cnt;
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