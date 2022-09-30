#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint a;
    cin >> a;
    vector<llint> v;
    v.push_back(1);
    llint l = 1, sum = 1;
    while (sum < a)
    {
        l += 2;
        sum += l;
        v.push_back(l);
    }
    l = v.size();
    cout << l << "\n";
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