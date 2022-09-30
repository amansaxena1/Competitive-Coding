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
    llint n, k, a, cnt = 0;
    cin >> n >> k;
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    a = *max_element(v.begin(), v.end());
    // cout << a << "\n";
    for (llint i = 0; i < n; i++)
    {
        if (i >= k - 1 && v[i] == a)
        {
            cnt += v.size() - i;
        }
    }
    cout << cnt << "\n";
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