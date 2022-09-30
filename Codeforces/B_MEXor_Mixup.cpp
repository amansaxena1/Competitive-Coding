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
    llint a, b, x = 0;
    cin >> a >> b;
    // for (llint i = 0; i < a; i++)
    // {
    //     x = i ^ x;
    // }
    llint temp = (a - 1) % 4;
    if (temp == 0)
    {
        x = a - 1;
    }
    else if (temp == 1)
    {
        x = 1;
    }
    else if (temp == 2)
    {
        x = a;
    }
    else if (temp == 3)
    {
        x = 0;
    }
    x = x ^ 0;
    if (x == b)
    {
        cout << a << "\n";
        return;
    }
    else
    {
        if ((x ^ b) != a)
        {
            cout << a + 1 << "\n";
            return;
        }
        else
        {
            cout << a + 2 << "\n";
            return;
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