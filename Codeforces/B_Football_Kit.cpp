#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    vector<pair<int, int>> v;
    llint n, a, b;
    cin >> n;
    vector<long long int> u(100000);
    for (llint i = 0; i < 100000; i++)
    {
        u[i] = 0;
    }

    for (llint i = 0; i < n; i++)
    {
        cin >> a >> b;
        u[a - 1]++;
        v.push_back(make_pair(a, b));
    }
    for (llint i = 0; i < n; i++)
    {
        cout << n - 1 + u[(v[i].second) - 1] << " " << 2 * (n - 1) - (n - 1 + u[(v[i].second) - 1]) << "\n";
    }
}
int main()
{
    aman();
    return 0;
}