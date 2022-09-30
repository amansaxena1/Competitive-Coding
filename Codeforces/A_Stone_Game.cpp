#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, ans = 0;
    vector<int> v;
    cin >> n;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int maxind;
    int minind;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        if (a > maxi)
        {
            maxi = a;
            maxind = i;
        }
        if (a < mini)
        {
            mini = a;
            minind = i;
        }
        v.push_back(a);
    }

    int startnear = min(maxind, minind);
    int endnear = v.size() - max(maxind, minind);
    int ele = min(startnear, endnear);
    int count = 0;
    int start, end;

    int startmax = maxind + 1;
    int startmin = minind + 1;
    int endmax = v.size() - maxind;
    int endmin = v.size() - minind;

    cout << min(max(startmax, startmin), min(startmax + endmin, min(startmin + endmax, max(endmax, endmin)))) << "\n";
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