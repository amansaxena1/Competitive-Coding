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

llint fun(llint n)
{
    if (n % 2 == 0)
        return 2;

    for (llint i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}

void aman()
{
    llint n, a;
    vector<llint> v;
    cin >> n;
    while (n != 1)
    {
        v.pb(n);
        n /= fun(n);
    }
    v.pb(1);
    sort(all(v), greater<llint>());
    for (llint i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
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