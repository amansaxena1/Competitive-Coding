#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, f, a, b, q, p, tmp, cnt = 0;
    cin >> n >> f;
    vector<llint> v(n + 1, 1);
    for (llint i = 0; i < f; i++)
    {
        cin >> a >> b;
        v[min(a, b)] = v[min(a, b)] - 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
        }
    }
    cin >> q;
    for (llint i = 0; i < q; i++)
    {
        cin >> p;
        if (p == 1)
        {
            cin >> a >> b;
            tmp = v[min(a, b)];
            if (v[tmp] == 1)
            {
                cnt--;
            }
            v[tmp] = v[tmp] - 1;
        }
        else if (p == 2)
        {
            cin >> a >> b;
            tmp = v[min(a, b)];
            v[tmp]++;
            if (v[tmp] == 1)
            {
                cnt++;
            }
        }
        else if (p == 3)
        {
            cout << cnt << "\n";
        }
    }
}
int main()
{
    llint t, n, a;
    aman();
    return 0;
}