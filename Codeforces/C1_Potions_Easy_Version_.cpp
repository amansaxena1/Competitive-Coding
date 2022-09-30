#include <bits/stdc++.h>
#define llint long long int
using namespace std;
vector<llint> v;

llint solve(llint sum, llint pos, llint ans)
{
    llint ans1;
    if (pos == v.size())
    {
        return ans;
    }
    if (sum + v[pos] > 0)
    {
        ans1 = solve(sum + v[pos], pos + 1, ans + 1);
    }
    llint ans2 = solve(sum, pos + 1, ans);
    return max(ans2, ans1);
}

int main()
{
    llint n, a, count, sum = 0, ans = 0;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << solve(sum, 0, ans);

    return 0;
}