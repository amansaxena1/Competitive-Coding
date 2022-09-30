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
// int commDiv(int a, int b)
// {
//     int n = __gcd(a, b);
//     int result = 0;
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             if (n / i == i)
//                 result += 1;
//             else
//                 result += 2;
//         }
//     }
//     return result;
// }
void aman()
{
    double x, y, n;
    cin >> x >> y >> n;
    double f;
    f = x / y;
    if (n >= y)
    {
        llint h = __gcd((llint)x, (llint)y);
        cout << x / h << "/" << y / h;
        return;
    }
    vector<pair<float, pair<double, double>>> v, u;
    for (double i = 1; i <= n; i++)
    {
        v.pb(mp((abs((ceil(f * i) / i) - f)), mp(ceil(f * i), i)));
        v.pb(mp((abs((ceil(f * i) / i) - f)), mp(floor(f * i), i)));
        v.pb(mp((abs((floor(f * i) / i) - f)), mp(floor(f * i), i)));
        v.pb(mp((abs((floor(f * i) / i) - f)), mp(ceil(f * i), i)));
    }
    std::sort(all(v));
    // for (llint i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].ff << " " << v[i].ss.ff << " " << v[i].ss.ss << "\n";
    // }

    llint p = (llint)v[0].ss.ff;
    llint q = (llint)v[0].ss.ss;
    double n1 = (llint)v[0].ss.ff;
    double n2 = (llint)v[1].ss.ff;
    q = v[0].ss.ss;
    llint ind = 0;
    for (llint i = 0; i < v.size(); i++)
    {
        if (v[i].ff == v[0].ff)
        {
            llint temp = q;
            q = min(q, (llint)v[i].ss.ss);
            if (temp != q)
            {
                ind = i;
            }
        }
        else
        {
            break;
        }
    }

    if (abs((n1 / q) - f) < abs((n2 / q) - f))
    {
        p = v[ind].ss.ff;
        // cout << (llint)v[0].ss.ff << "/" << (llint);
    }
    else
    {
        p = v[ind + 1].ss.ff;
    }
    for (llint i = 1; i < min(p, q); i++)
    {
        if (p % i == 0 && q % i == 0)
        {
            p /= i;
            q /= i;
        }
    }
    // cout << f << "\n";
    // cout << abs(((double)p / (double)q) - f) << "\n";
    // cout << abs(1 - f) << "\n";

    // cout << 328.0 / 655.0 << "\n"
    //      << 779.0 / 1556.0 << "\n";
    llint h = __gcd(p, q);
    cout << p / h << "/" << q / h;
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