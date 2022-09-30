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
void aman()
{
    llint t;
    llint n, i, x, c = 0, ans = 0, sum = 0;
    cin >> n;
    vector<llint> v;
    for (i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += v[i];
        }
        else
        {
            llint temp = sum - v[i];

            if (i > 0 && v[i] >= v[i - 1])
            {
                ans += c;
            }
            // ans += c;

            c++;

            if (temp < 0)
            {
                ans += sum;
                sum = 0;
                c = 0;
            }
            else
            {
                sum = temp;
                ans += v[i];
            }
        }
    }
    cout << ans << "\n";
}
int main()
{
    fast;
    llint t = 1, n, a;
    // cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}