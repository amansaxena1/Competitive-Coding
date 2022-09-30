#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint w, h;
    llint x1, y1, x2, y2;
    llint a, b, p = 0, q = 0;
    llint ans = 0;
    cin >> w >> h >> x1 >> y1 >> x2 >> y2 >> a >> b;

    if (abs(x2 - x1) + a > w && abs(y2 - y1) + b > h)
    {
        cout << "-1\n";
        return;
    }
    else
    {
        if (w - x2 >= a || x1 - 0 >= a || h - y2 >= b || y1 - 0 >= b)
        {
            ans = 0;
        }
        else
        {
            if ((x2 - x1) + a <= w)
            {
                q = min(a - x1, a - (w - x2));
            }
            if (abs(y2 - y1) + b <= h)
            {
                p = min(b - y1, b - (h - y2));
                        }
            if (p == 0)
            {
                ans = q;
            }
            else if (q == 0)
            {
                ans = p;
            }
            else
            {
                ans = min(p, q);
            }
        }
    }
    cout << ans << ".000000000\n";
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