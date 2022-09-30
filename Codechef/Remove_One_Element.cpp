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
    llint n;
    cin >> n;
    llint a[n], b[n - 1];
    for (llint i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (llint i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n - 1);
    llint temp = b[n - 2] - a[n - 1];
    llint temp1 = b[0] - a[0];
    llint c = 0, c1 = 0;
    if (n == 2)
    {
        if (min(b[0] - a[0], b[0] - a[1]) <= 0)
        {
            cout << max(b[0] - a[0], b[0] - a[1]) << "\n";
        }
        else
        {
            cout << min(b[0] - a[0], b[0] - a[1]) << "\n";
        }
    }
    else if (temp <= 0)
    {
        cout << temp1 << "\n";
    }
    else if (temp1 <= 0)
    {
        cout << temp << "\n";
    }
    else
    {
        for (llint i = 1; i < n - 1; i++)
        {
            if (b[i] - a[i] == temp1)
            {
                c++;
            }
        }
        for (llint i = n - 3; i >= 0; i--)
        {
            if (b[i] - a[i + 1] == temp)
            {
                c1++;
            }
        }

        if ((c == n - 2) && (c1 == n - 2))
        {
            cout << min(temp1, temp) << endl;
            return;
        }
        if (c != n - 2)
        {
            cout << temp << endl;
        }
        else
        {
            cout << temp1 << endl;
        }
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