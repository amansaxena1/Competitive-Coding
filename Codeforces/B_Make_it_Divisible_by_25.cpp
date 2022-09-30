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
    cin >> n;
    vector<llint> v;
    while (n)
    {
        v.pb(n % 10);
        n /= 10;
    }
    // for (llint i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    llint b = 0, a = 0, f = 0;
    reverse(all(v));
    for (llint i = v.size() - 1; i >= 0; i--)
    {
        if (f == 0 && v[i] == 5)
        {
            f = 1;
        }
        else if (f == 1 && (v[i] == 2 || v[i] == 7))
        {
            break;
        }
        else
        {
            a++;
        }
    }

    f = 0;
    for (llint i = v.size() - 1; i >= 0; i--)
    {
        if (f == 0 && v[i] == 0)
        {
            f = 1;
        }
        else if (f == 1 && (v[i] == 0 || v[i] == 5))
        {
            break;
        }
        else
        {
            b++;
        }
    }
    // cout << a << " " << b << "\n";
    cout << min(a, b) << "\n";
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