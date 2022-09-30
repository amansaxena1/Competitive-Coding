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
    llint n, c = 0, k;
    cin >> n;
    for (k = 1; k <= n; k++)
    {
        for (int i = k; i <= n; i = i + k)
        {
            for (int j = k; j <= n; j = j + i)
            {
                if (j % i == k)
                {
                    c++;
                }
            }
        }
    }
    cout << c << endl;
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