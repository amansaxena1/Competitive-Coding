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
    string a, b;
    cin >> n >> k;
    cin >> a;
    cin >> b;
    llint va[26] = {0};
    llint vb[26] = {0};

    for (llint i = 0; i < n; i++)
    {
        va[a[i] - 'a']++;
        vb[b[i] - 'a']++;
    }
    // for (llint i = 0; i < 26; i++)
    // {
    //     cout << va[i] << " ";
    // }
    // cout << "\n";
    // for (llint i = 0; i < 26; i++)
    // {
    //     cout << vb[i] << " ";
    // }
    // cout << "\n";
    for (llint i = 0; i < 25; i++)
    {
        if (vb[i] > va[i] || ((va[i] - vb[i]) % k != 0))
        {
            cout << "No\n";
            return;
        }
        va[i + 1] += va[i] - vb[i];
    }
    cout << "Yes\n";
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