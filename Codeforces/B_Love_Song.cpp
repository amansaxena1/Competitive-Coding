#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint n, q, a, b, ans = 0;
    cin >> n >> q;
    vector<llint> v;
    string s;
    cin >> s;
    v.push_back(0);
    for (llint i = 0; i < s.length(); i++)
    {
        v.push_back(v[i] + s[i] - 96);
    }
    // for (llint i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    while (q--)
    {
        cin >> a >> b;
        ans = v[b] - v[a - 1];
        cout << ans << "\n";
    }
    return 0;
}