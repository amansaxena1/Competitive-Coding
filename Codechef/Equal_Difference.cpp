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
    // unordered_set<llint> s;

    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(), v.end());
    llint cnt = 1, maxi = 1;
    if (v.size() > 2)
    {

        for (llint i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1])
            {
                cnt++;
            }
            else
            {
                maxi = max(maxi, cnt);
                cnt = 1;
            }
        }
        maxi = max(maxi, cnt);
        // cout << maxi << " ";

        cout << min(n - 2, n - maxi) << "\n";
    }
    else
    {
        cout << 0 << "\n";
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