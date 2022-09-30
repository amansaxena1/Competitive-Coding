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
    llint a, b, c, d, e;
    vector<llint> v(3);
    for (llint i = 0; i < 3; i++)
    {
        cin >> a;
        v[i] = a;
    }
    cin >> d >> e;
    sort(all(v));
    a = v[0];
    b = v[1];
    c = v[2];
    if (a + b + c > d + e)
    {
        cout << "NO\n";
        return;
    }
    if (a > e)
    {
        cout << "NO\n";
        return;
    }
    if (c <= e)
    {
        if (a + b <= d)
        {
            cout << "YES\n";
            return;
        }
        cout << "NO\n";
        return;
    }
    if (b <= e)
    {
        if (a + c <= d)
        {
            cout << "YES\n";
            return;
        }
        cout << "NO\n";
        return;
    }
    if (a <= e)
    {
        if (b + c <= d)
        {
            cout << "YES\n";
            return;
        }
        cout << "NO\n";
        return;
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