#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, cnt = 0;
    cin >> n;
    string e, g;
    cin >> e >> g;
    for (llint i = 0; i < n; i++)
    {
        if (e[i] == '0' && g[i] == '1')
        {
            cnt++;
            e[i] = '*';
            g[i] = '*';
        }
        else if (g[i] == '1')
        {
            if (i > 0 && e[i - 1] == '1')
            {
                e[i - 1] = '*';
                cnt++;
            }
            else if (i < n - 1 && e[i + 1] == '1')
            {
                e[i + 1] = '*';
                cnt++;
            }
        }
    }
    // cout << e << " " << g;
    cout << cnt << "\n";
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