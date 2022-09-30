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
    string s;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "No\n";
        return;
    }
    if ((llint)ceil(n / 2.0) % 2 == 0)
    {
        cout << "Yes\n";
        cout << "1 2\n";
        cout << n - 1 << " ";
        for (llint i = 1; i <= n; i++)
        {
            if (i != 2)
            {
                cout << i << " ";
            }
        }
        return;
    }
    else
    {
        for (llint i = 1; i <= n; i++)
        {
            v.pb(i);
        }
        unsigned llint a = 1, b = ((n * (n + 1)) / 2) - 1, i = 1, c;
        c = b;
        while (true)
        {
            if (__gcd(a, b) > 1)
            {
                cout << "Yes\n";
                cout << i << " ";
                for (llint j = 0; j < i; j++)
                {
                    cout << v[j] << " ";
                }
                cout << "\n";
                cout << n - i << " ";
                for (llint j = i; j < n; j++)
                {
                    cout << v[j] << " ";
                }
                return;
            }
            a += v[i];
            b -= v[i];
            i++;
            if (a == c)
            {
                cout << "No\n";
                break;
            }
        }
    }
} // 1 2 3 4 5
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