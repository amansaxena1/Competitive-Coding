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
    llint n, p = 0;
    cin >> n;
    char a[n];
    string s;
    cin >> s;
    llint k = 0;

    p = count(s.begin(), s.end(), '?');
    if (p == n)
    {
        for (llint i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                cout << "R";
            }
            else
            {
                cout << "B";
            }
        }
        cout << "\n";
        return;
    }
    for (llint i = 0; i < n; i++)
    {
        if (s[i] != '?')
        {
            k = i;
            break;
        }
    }
    a[k] = s[k];
    for (llint i = k - 1; i >= 0; i--)
    {
        if (s[i] != '?')
        {
            a[i] = s[i];
        }
        else
        {
            if (a[i + 1] == 'B')
            {
                a[i] = 'R';
            }
            else
            {
                a[i] = 'B';
            }
        }
    }
    for (llint i = k + 1; i < n; i++)
    {
        if (s[i] != '?')
        {
            a[i] = s[i];
        }
        else
        {
            if (a[i - 1] == 'B')
            {
                a[i] = 'R';
            }
            else
            {
                a[i] = 'B';
            }
        }
    }
    for (llint i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << "\n";
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