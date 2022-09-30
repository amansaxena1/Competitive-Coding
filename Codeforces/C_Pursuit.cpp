#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, p, q, ms = 0, as = 0, ans = 0, ai = 0, mi = 0;
    cin >> n;
    vector<llint> m, a;
    for (llint i = 0; i < n; i++)
    {
        cin >> p;
        m.push_back(p);
    }
    for (llint i = 0; i < n; i++)
    {
        cin >> p;
        a.push_back(p);
    }
    p = n - floor(n / 4);
    sort(m.begin(), m.end(), greater<llint>());
    sort(a.begin(), a.end(), greater<llint>());
    for (llint i = 0; i < p; i++)
    {
        ms += m[i];
        as += a[i];
        ai = i;
        mi = i;
    }
    ai = p;
    mi = p - 1;
    if (ms >= as)
    {
        cout << ans << "\n";
        return;
    }
    else
    {
        while (ms < as)
        {
            // ms = 0;
            // as = 0;
            n++;
            q = n - floor(n / 4);
            if (q != p)
            {
                p = q;
                if (ai < a.size())
                {
                    as += a[ai];
                    ai++;
                }
                ms += 100;
            }
            else
            {
                ms += 100;
                if (mi >= 0)
                {
                    ms -= m[mi];
                    mi--;
                }
            }
            // m.push_back(100);
            // a.push_back(0);
            // sort(a.begin(), a.end(), greater<int>());
            // sort(m.begin(), m.end(), greater<int>());

            // for (llint i = 0; i < p; i++)
            // {
            //     ms += m[i];
            //     as += a[i];
            // }
            ans++;
        }
    }
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