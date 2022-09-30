#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, b, ans;
    vector<pair<llint, llint>> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for (llint i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ans = min(v[i].first, v[i].second);
        }
        else
        {
            if (ans <= min(v[i].first, v[i].second))
            {
                ans = min(v[i].first, v[i].second);
            }
            else
            {
                ans = max(v[i].first, v[i].second);
            }
        }
    }
    cout << ans;
}
int main()
{
    aman();
    return 0;
}