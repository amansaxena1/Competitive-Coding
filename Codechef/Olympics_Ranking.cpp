#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    // if (a > d)
    // {
    //     cout << 1 << "\n";
    //     return;
    // }
    // else if (a < d)
    // {
    //     cout << 2 << "\n";
    //     return;
    // }
    // else
    // {
    //     if (b > e)
    //     {
    //         cout << 1 << "\n";
    //         return;
    //     }
    //     else if (b < e)
    //     {
    //         cout << 2 << "\n";
    //         return;
    //     }
    //     else
    //     {
    //         if (c > f)
    //         {
    //             cout << 1 << "\n";
    //             return;
    //         }
    //         else if (c < f)
    //         {
    //             cout << 2 << "\n";
    //             return;
    //         }
    //         else
    //         {
    //             cout << 2 << "\n";
    //         }
    //     }
    // }
    if (a + b + c > d + e + f)
    {
        cout << "1\n";
    }
    else
    {
        cout << "2\n";
    }
}
int main()
{
    llint t, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}