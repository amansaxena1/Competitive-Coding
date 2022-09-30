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
    llint n, k;
    vector<llint> v;
    string s;
    cin >> n >> k;
    for (llint i = 0; i < n; i++)
    {
        llint vi;
        cin >> vi;
        v.pb(vi);
    }
    llint ans = 1;
    if (k > 10000 || n == 1)
    {
        cout << "-1\n";
        return;
    }
    for (llint j = 0; j < k; j++)
    {
        for (llint i = 0; i < n - 1; i++)
        {
            if (v[i + 1] > v[i])
            {
                if (j == k - 1)
                {
                    cout << i + 1 << "\n";
                    return;
                }
                v[i]++;
                break;
            }
            else if (i == n - 2)
            {
                cout << "-1\n";
                return;
            }
            // for (llint i = 0; i < n; i++)
            // {
            //     cout << v[i] << " ";
            // }
            // cout << "\n";
            ans = i + 1;
        }
    }
    cout << ans << "\n";
    // while (k != 0)
    // {
    //     for (llint i = 1; i < n - 1; i++)
    //     {
    //         if (i + 1 == n)
    //         {
    //             cout << "-1 \n";
    //             return;
    //         }
    //         if (v[i + 1] > v[i])
    //         {
    //             k -= min((v[i + 1] - v[i]), v[i - 1] - v[i]);
    //             if (k < 0)
    //             {
    //                 cout << i << "\n";
    //                 return;
    //             }
    //             break;
    //         }
    //     }
    // }
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