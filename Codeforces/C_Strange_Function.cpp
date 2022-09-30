#include <bits/stdc++.h>
#define llint unsigned long long int
using namespace std;
void aman()
{
    llint n, ans, six;
    cin >> n;

    if (n % 2 == 0)
    {
        ans = (2 * (n / 2)) + (3 * (n / 2));
        six = n / 6;
        ans -= six * 3;
        if (six % 2 == 0)
        {
            ans += (six / 2) * 4;
            ans += (six / 2) * 5;
        }
        else
        {
            ans += ((six + 1) / 2) * 4;
            ans += ((six - 1) / 2) * 5;
        }
    }
    else
    {
        ans = (2 * ((n + 1) / 2)) + (3 * ((n - 1) / 2));
        six = n / 6;
        ans -= six * 3;
        if (six % 2 == 0)
        {
            ans += (six / 2) * 4;
            ans += (six / 2) * 5;
        }
        else
        {
            ans += ((six + 1) / 2) * 4;
            ans += ((six - 1) / 2) * 5;
        }
    }
    // ans = 27499999999999999;
    ans = ((ans % 1000000007) + 1000000007) % 1000000007;
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