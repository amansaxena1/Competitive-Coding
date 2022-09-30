#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, mini = INT_MIN, i = 0;
    cin >> n;
    vector<llint> v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;

        v.push_back(a);
    }
    *max_element(v.begin(), v.end()) *
        sort(v.begin(), v.end());
    // llint ans = ;
    cout << v[v.size() - 1] * v[v.size() - 2] << "\n";
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