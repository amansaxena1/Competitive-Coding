/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

llint dp[100][2];
void aman()
{
    llint n, k, d;
    cin >> n >> k >> d;
    dp[0][0] = 1;
    dp[0][1] = 0;

    for (llint i = 1; i <= n; ++i)
    {
        dp[i][0] = dp[i][1] = 0;
        for (llint j = 1; j <= k; ++j)
        {
            if (i - j < 0)
                break;

            if (j < d)
            {
                dp[i][0] = (dp[i][0] + dp[i - j][0]) % mod;
                dp[i][1] = (dp[i][1] + dp[i - j][1]) % mod;
            }
            else
            {
                dp[i][1] = (dp[i][1] + dp[i - j][0]) % mod;
                dp[i][1] = (dp[i][1] + dp[i - j][1]) % mod;
            }
        }
    }
    cout << dp[n][1] << "\n";
}
int main()
{
    fast;
    llint t = 1, n, a;
    while (t--)
    {
        aman();
    }
    return 0;
}