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
    llint n, m;
    cin >> n >> m;
    char a[2 * n - 1][m];
    {
        for (llint i = 0; i < 2 * n - 1; i++)
        {
            for (llint j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    string st = "";
    for (llint k = 0; k < m; k++)
    {
        vector<llint> v(26, 0);
        for (llint i = 0; i < 2 * n - 1; i++)
        {
            v[a[i][k] - 'a']++;
        }
        for (llint i = 0; i < 26; i++)
        {
            if (v[i] % 2 != 0)
            {
                st += char(97 + i);
                break;
            }
        }
    }
    cout << st << endl;
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
    cout << flush;
    return 0;
}