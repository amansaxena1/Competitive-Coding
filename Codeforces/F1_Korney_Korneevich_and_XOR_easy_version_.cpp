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
    unordered_set<llint> s;
    vector<llint> v, temp;
    vector<vector<llint>> vp;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
        s.insert(vi);
    }
    llint st = 0;
    for (llint i = 1; i < n; i++)
    {
        if (v[i] > v[i - 1])
        {
        }
        else
        {
            for (llint j = st; j < i; j++)
            {
                temp.pb(v[j]);
            }
            vp.pb(temp);
            temp.clear();
            st = i;
        }
    }
    for (llint i = 0; i < vp.size(); i++)
    {
        temp.clear();
        temp = vp[i];
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