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
        v.push_back(a);
        u.push_back(a);
    }
    sort(v.begin(), v.end());
    vector<llint>::iterator ip;
    ip = std::unique(v.begin(), v.end());
    v.resize(std::distance(v.begin(), ip));
    a = v.size();
    if (a == 4 || a == 3)
    {
        cout << "2\n";
        return;
    }
    else if (a == 2)
    {
        if (count(u.begin(), u.end(), v[0]) == 2)
        {
            cout << "2\n";
        }
        else
        {
            cout << "1\n";
        }
        return;
    }
    else if (a == 1)
    {
        cout << "0\n";
    }
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