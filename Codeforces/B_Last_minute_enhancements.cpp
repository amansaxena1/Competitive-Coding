#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a;
    vector<llint> v;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    set<int, greater<int>> s;
    for (llint i = 0; i < n; i++)
    {
        if (s.find(v[i]) == s.end())
        {
            s.insert(v[i]);
        }
        else
        {
            s.insert(v[i] + 1);
        }
    }
    cout << s.size() << "\n";
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