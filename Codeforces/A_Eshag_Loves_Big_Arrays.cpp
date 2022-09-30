#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    vector<llint> v;
    llint n, a;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    a = count(v.begin(), v.end(), v[0]);
    llint ans = v.size() - a;
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