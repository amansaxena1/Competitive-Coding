#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    vector<llint> v, u;
    llint a;
    for (llint i = 0; i < 4; i++)
    {
        cin >> a;
        u.push_back(a);
        v.push_back(a);
    }
    sort(u.begin(), u.end());
    if (v[0] == u[3] || v[0] == u[2] || v[1] == u[2] || v[1] == u[3])
    {
        if (v[2] == u[3] || v[2] == u[2] || v[3] == u[2] || v[3] == u[3])
        {
            cout << "YES"
                 << "\n";
            return;
        }
    }
    cout << "NO"
         << "\n";
    return;
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