/*       ¯ಠ_ಠ_/¯        */
#include <bits/stdc++.h>
#define llint long long int
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
void aman()
{
    llint n;
    cin >> n;
    vector<llint> v(n);
    map<llint, llint> mp;
    for (llint i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }
    llint m = 0;
    for (llint i = 3; i <= 2 * n - 1; i++)
    {
        for (llint j = 1; j * j < i; j++)
        {
            if (i % j != 0)
                continue;

            if (mp.find(j) != mp.end())
            {
                if (mp.find(i / j) != mp.end())
                {
                    if (mp[j] + mp[i / j] == i)
                    {
                        m++;
                    }
                }
            }
        }
    }

    cout << m << '\n';
}
int main()
{
    fast;
    llint t = 1, n, a;
    cin >> t;
    while (t--)
    {
        aman();
    }
    return 0;
}