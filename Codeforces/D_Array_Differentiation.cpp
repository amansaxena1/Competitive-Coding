#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a, n, flag1 = 0;
    cin >> n;
    vector<double> v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 0)
        {
            flag1 = 1;
        }
        v.push_back(a);
    }
    if (flag1 == 1)
    {
        cout << "YES\n";
        return;
    }
    else if (n == 1 && v[0] != 0)
    {
        cout << "NO\n";
        return;
    }
    sort(v.begin(), v.end());
    double p = v[0] / v[1];
    for (llint i = 2; i < n; i++)
    {
        if (v[i] / v[i + 1] != p)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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