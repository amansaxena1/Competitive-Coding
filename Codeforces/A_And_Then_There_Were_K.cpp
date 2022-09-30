#include <bits/stdc++.h>
#define llint long long int
using namespace std;

int main()
{
    llint t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        llint a = log2(n);
        llint ans = pow(2, a) - 1;
        cout << ans << "\n";
    }
    return 0;
}