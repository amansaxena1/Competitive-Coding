#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, m, x, y, a, b, c, d;
    cin >> n >> m >> x >> y;
    if ((n - x) > (x - 1))
    {
        a = n;
        c = 1;
        if ((m - y) > (y - 1))
        {
            b = m;
            d = 1;
        }
        else
        {
            b = 1;
            d = m;
        }
    }
    else
    {
        a = 1;
        c = n;
        if ((m - y) > (y - 1))
        {
            b = m;
            d = 1;
        }
        else
        {
            b = 1;
            d = m;
        }
    }
    cout << a << " " << b << " " << c << " " << d << "\n";
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