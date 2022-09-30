#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    string s, t;
    cin >> s;
    t = s;
    vector<char> v;
    vector<llint> vc;
    sort(t.begin(), t.end());
    auto res = unique(t.begin(), t.end());
    t = string(t.begin(), res);
    for (llint i = 0; i < t.length(); i++)
    {
        v.push_back(t[i]);
        vc.push_back(count(s.begin(), s.end(), t[i]));
    }
    llint ans = 0, count = 0;
    for (llint i = 0; i < vc.size(); i++)
    {
        if (vc[i] > 1)
        {
            ans++;
        }
        else
        {
            count++;
        }
    }
    ans += count / 2;
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