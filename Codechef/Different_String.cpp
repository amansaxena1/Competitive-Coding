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
    int n, c = 0;
    cin >> n;
    int b[n + 1];
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (llint i = 0; i < n + 1; i++)
    {
        b[i] = -2;
    }
    for (int i = 0; i < n; i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            string st = a[i];
            if (st[j] == '1')
            {
                c++;
            }
        }
        b[c]++;
    }
    int k = 0;
    for (int i = 0; i < n + 1; i++)
    {
        if (b[i] == -2)
        {
            k = i;
            break;
        }
    }
    string s;
    for (int i = 0; i < k; i++)
    {
        s = s + "1";
    }
    for (int i = k + 1; k < n; k++)
    {
        s += "0";
    }
    cout << s << "\n";
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