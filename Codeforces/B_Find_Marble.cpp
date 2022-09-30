#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a, n, s, t, temp, count = 0;
    vector<llint> v, u;
    cin >> n >> s >> t;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    temp = s;
    while (s != t)
    {
        if (s == temp && count > 0)
        {
            break;
        }
        else
        {
            u.push_back(v[s - 1]);
            s = v[s - 1];
            count++;
        }
    }
    if (s == t)
    {
        cout << count;
    }
    else
    {
        cout << "-1";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    aman();
    return 0;
}