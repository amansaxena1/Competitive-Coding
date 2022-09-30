#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, m, k;
    vector<llint> v;
    cin >> n >> m >> k;
    if (k == (n - 1) + n * (m - 1) || k == (m - 1) + m * (n - 1))
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO\n";
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