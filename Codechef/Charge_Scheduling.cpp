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
    llint n, x, sum = 0;
    vector<pair<llint, llint>> v;
    vector<llint> a;
    cin >> n;
    llint arr[n];
    for (llint i = 0; i < n; i++)
    {
        cin >> x;
        v.pb(mp(x, i + 1));
    }

    for (llint i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    x = arr[0];
    sort(all(v));
    for (llint i = 0; i < n; i++)
    {
        sum += v[i].ff;
        if (sum <= x)
        {
            a.pb(sum);
        }
        else
        {
            break;
        }
    }
    cout << a.size() << endl;
    sum = 0;
    for (llint i = 0; i < a.size(); i++)
    {
        cout << v[i].ss << " " << sum << " " << a[i] << endl;
        sum = a[i];
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