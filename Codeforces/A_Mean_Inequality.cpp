#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a, n;
    cin >> n;
    vector<llint> v, u;
    for (llint i = 0; i < 2 * n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (llint i = 0; i < n; i++)
    {
        u.push_back(v[i]);
        u.push_back(v[i + n]);
    }
    for (llint i = 0; i < 2 * n; i++)
    {
        cout << u[i] << " ";
    }
    cout << "\n";
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