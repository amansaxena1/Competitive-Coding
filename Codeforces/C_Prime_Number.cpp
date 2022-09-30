/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

ll M = 1e9 + 7;

ll gcd(ll a, ll b)
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll pwr(ll a, ll b)
{
    if (b == 0)
        return 1;

    ll p = pwr(a, b / 2);
    if (b % 2)
        return ((a * p) % M * p) % M;
    else
        return (p * p) % M;
}

ll divi(ll a, ll b)
{
    return (a * pwr(b, M - 2)) % M;
}

void aman()
{
    int n;
    ll x, a[100005], s = 0, t = 1;
    vector<ll> v;

    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    for (int i = 0; i < n; i++)
        v.pb(s - a[i]);
    sort(v.rbegin(), v.rend());

    int ct = 0;
    ll mini = -1;
    while (ct % x == 0)
    {
        ct = 0;
        mini = v[v.size() - 1];
        int pos = v.size() - 1;
        while (pos >= 0 && v[pos] == mini)
        {
            ct++;
            v.pop_back();
            pos--;
        }

        if (ct % x == 0)
        {
            for (int i = 0; i < ct / x; i++)
                v.pb(mini + 1);
        }
    }

    mini = min(mini, s);
    cout << pwr(x, mini);
}
int main()
{
    fast;
    int t = 1, n, a;
    // cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}