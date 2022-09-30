#include <bits/stdc++.h>
#define llint long long int
using namespace std;
float fun(float c, float m, float p, float v, float curr, float ans)
{
    if (c != 0)
    {
        curr = curr * c;
        if (c <= v)
        {
            if (m != 0)
            {
                m += c / 2;
                p += c / 2;
            }
            else
            {
                p += c;
            }
            c = 0;
        }
        else
        {
            if (m != 0)
            {
                m += c / 2;
                p += c / 2;
            }
            else
            {
                p += c;
            }
            c = v;
        }
        ans += fun(c, m, p, v, curr, ans);
    }
    if (m != 0)
    {
        curr = curr * m;
        if (m <= v)
        {
            if (c != 0)
            {
                c += m / 2;
                p += m / 2;
            }
            else
            {
                p += m;
            }
            m = 0;
        }
        else
        {
            if (c != 0)
            {
                c += m / 2;
                p += m / 2;
            }
            else
            {
                p += m;
            }
            m = v;
        }
        ans += fun(c, m, p, v, curr, ans);
    }
    ans += curr * p;
    return ans;
}
void aman()
{
    float c, m, p, v, ans;
    cin >> c >> m >> p >> v;
    ans = fun(c, m, p, v, 1, ans);
    cout << ans << "\n";
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