#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, sum = 0;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
        v.push_back(a);
    }
    llint ans = 0;
    if (sum % n == 0)
    {
        for (llint i = 0; i < n; i++)
        {
            if (v[i] > sum / n)
            {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    else
    {
        cout << "-1"
             << "\n";
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