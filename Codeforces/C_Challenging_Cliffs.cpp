#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, b, mini = INT_MIN, last;
    cin >> n;
    vector<llint> w, v;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    for (llint i = 0; i < n - 1; i++)
    {
        last = mini;
        mini = min((v[i + 1] - v[i]), mini);
        if (mini != last)
        {
            a = i;
            b = i + 1;
        }
    }
    for (llint i = 0; i < v.size(); i++)
    {
        if (i != a && i != b)
        {
            w.push_back(v[i]);
        }
    }
    for (llint i = 0; i < w.size(); i++)
    {
        cout << w[i] << " ";
    }
    cout << "\n";
    vector<llint> u;
    u.push_back(v[a]);
    sort(w.begin(), w.end());
    for (llint i = 0; i < w.size(); i++)
    {
        u.push_back(w[i]);
    }
    u.push_back(v[b]);
    for (llint i = 0; i < u.size(); i++)
    {
        cout << u[i] << " ";
    }
    cout << "\n";
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