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
    llint sum = 0, k = 0;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        sum += vi;
        v.pb(vi);
        if (v[i] % 2 != 0)
        {
            k = i;
        }
    }
    if (sum % 2 == 0)
    {
        cout << n << "\n";
        for (llint i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
        return;
    }
    llint f = 0;
    for (llint i = 3; i < sum; i++)
    {
        if (sum % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        cout << n << "\n";
        for (llint i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
        return;
    }
    cout << n - 1 << "\n";
    for (llint i = 0; i < n; i++)
    {
        if (i != k)
        {
            cout << i + 1 << " ";
        }
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