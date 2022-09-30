#include <bits/stdc++.h>
#define llint long long int
using namespace std;
void aman()
{
    llint n, a, sum = 0;
    cin >> n;
    for (llint i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
    }
    llint rem = sum % n;
    llint ans;
    if (rem != 0)
    {
        ans = rem * (n - rem);
    }
    else
    {
        ans = rem;
    }
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